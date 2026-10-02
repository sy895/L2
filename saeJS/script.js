const GRID_WIDTH = 80;
const GRID_HEIGHT = 59;
const CELL_SIZE = 10;
const GAME_SPEED = 100;

const DIRECTIONS = {
  UP: { x: 0, y: -1 },
  DOWN: { x: 0, y: 1 },
  LEFT: { x: -1, y: 0 },
  RIGHT: { x: 1, y: 0 },
};

class Player {
  constructor(id, startX, startY, color, keys) {
    this.id = id;
    this.x = startX;
    this.y = startY;
    this.color = color;
    this.keys = keys;
    this.direction = "RIGHT";
    this.trail = [{ x: startX, y: startY }];
    this.isAlive = true;
  }

  update() {
    if (!this.isAlive) return;
    this.move();
  }

  move() {
    const dir = DIRECTIONS[this.direction];
    this.x += dir.x;
    this.y += dir.y;
    this.trail.push({ x: this.x, y: this.y });
  }

  reset(startX, startY) {
    this.x = startX;
    this.y = startY;
    this.direction = "RIGHT";
    this.trail = [{ x: startX, y: startY }];
    this.isAlive = true;
  }

  checkCollision(game) {
    if (
      this.x < 0 ||
      this.x >= GRID_WIDTH ||
      this.y < 0 ||
      this.y >= GRID_HEIGHT
    ) {
      return true;
    }

    for (let i = 0; i < this.trail.length - 1; i++) {
      const segment = this.trail[i];
      if (segment.x === this.x && segment.y === this.y) {
        return true;
      }
    }

    const otherPlayer = game.players.find((p) => p.id !== this.id);
    if (otherPlayer) {
      for (const segment of otherPlayer.trail) {
        if (segment.x === this.x && segment.y === this.y) {
          return true;
        }
      }
    }

    return false;
  }
}

class Game {
  constructor(canvas) {
    this.canvas = canvas;
    this.ctx = canvas.getContext("2d");
    this.isRunning = false;
    this.gameLoop = null;

    this.scores = { player1: 0, player2: 0 };

    this.players = [
      new Player("player1", 1, 28, "#2196F3", {
        left: "KeyA",
        down: "KeyS",
        right: "KeyD",
        up: "KeyW",
      }),
      new Player("player2", 1, 30, "#F44336", {
        left: "ArrowLeft",
        down: "ArrowDown",
        right: "ArrowRight",
        up: "ArrowUp",
      }),
    ];

    this.setupEventListeners();
    this.render();
  }

  setupEventListeners() {
    document.addEventListener("keydown", (e) => this.handleKeyDown(e));
    document
      .getElementById("start-restart-btn")
      .addEventListener("click", () => this.start());
    document
      .getElementById("stop-btn")
      .addEventListener("click", () => this.stop());
    document
      .getElementById("config-keys-btn")
      .addEventListener("click", () => this.openKeyConfig());

    document
      .querySelector(".close")
      .addEventListener("click", () => this.closeKeyConfig());
    document
      .getElementById("close-modal-btn")
      .addEventListener("click", () => this.closeKeyConfig());
    document
      .getElementById("reset-keys-btn")
      .addEventListener("click", () => this.resetKeyMappings());

    document
      .getElementById("key-config-modal")
      .addEventListener("click", (e) => {
        if (e.target.id === "key-config-modal") {
          this.closeKeyConfig();
        }
      });

    document.querySelectorAll(".key-input").forEach((input) => {
      input.addEventListener("click", (e) => this.startKeyConfig(e.target));
    });
  }

  handleKeyDown(event) {
    if (!this.isRunning) return;

    const key = event.code;

    if (
      key === this.players[0].keys.left &&
      this.players[0].direction !== "RIGHT"
    )
      this.players[0].direction = "LEFT";
    if (key === this.players[0].keys.down && this.players[0].direction !== "UP")
      this.players[0].direction = "DOWN";
    if (
      key === this.players[0].keys.right &&
      this.players[0].direction !== "LEFT"
    )
      this.players[0].direction = "RIGHT";
    if (key === this.players[0].keys.up && this.players[0].direction !== "DOWN")
      this.players[0].direction = "UP";

    if (
      key === this.players[1].keys.left &&
      this.players[1].direction !== "RIGHT"
    )
      this.players[1].direction = "LEFT";
    if (key === this.players[1].keys.down && this.players[1].direction !== "UP")
      this.players[1].direction = "DOWN";
    if (
      key === this.players[1].keys.right &&
      this.players[1].direction !== "LEFT"
    )
      this.players[1].direction = "RIGHT";
    if (key === this.players[1].keys.up && this.players[1].direction !== "DOWN")
      this.players[1].direction = "UP";
  }

  toggleGame() {
    if (this.isRunning) {
      this.stop();
    } else {
      this.start();
    }
  }

  start() {
    if (this.isRunning) return;

    this.isRunning = true;
    document.getElementById("start-restart-btn").textContent = "Redémarrer";
    document.getElementById("start-restart-btn").disabled = true;

    this.players[0].reset(1, 28);
    this.players[1].reset(1, 30);

    this.gameLoop = setInterval(() => this.update(), GAME_SPEED);
    this.updateScoreDisplay();
  }

  stop() {
    this.isRunning = false;
    if (this.gameLoop) {
      clearInterval(this.gameLoop);
      this.gameLoop = null;
    }

    this.scores = { player1: 0, player2: 0 };
    this.players[0].reset(1, 28);
    this.players[1].reset(1, 30);

    document.getElementById("start-restart-btn").textContent = "Démarrer";
    document.getElementById("start-restart-btn").disabled = false;
    this.updateScoreDisplay();
    this.render();
  }

  update() {
    this.players.forEach((player) => player.update());

    const collisions = this.players.map((player) =>
      player.checkCollision(this)
    );
    const alivePlayers = collisions.filter((collision) => !collision).length;

    if (alivePlayers < 2) {
      this.handleRoundEnd(collisions);
    }

    this.render();
  }

  handleRoundEnd(collisions) {
    let winner = null;

    if (collisions[0] && !collisions[1]) {
      winner = "player2";
      this.scores.player2++;
    } else if (collisions[1] && !collisions[0]) {
      winner = "player1";
      this.scores.player1++;
    }

    this.updateScoreDisplay();

    setTimeout(() => {
      this.players[0].reset(1, 28);
      this.players[1].reset(1, 30);
    }, 500);
  }

  updateScoreDisplay() {
    document.querySelector(".score-player1 .player-score").textContent =
      this.scores.player1;
    document.querySelector(".score-player2 .player-score").textContent =
      this.scores.player2;
  }

  render() {
    this.ctx.fillStyle = "#0a0a0a";
    this.ctx.fillRect(0, 0, this.canvas.width, this.canvas.height);

    if (this.isRunning) {
      this.players.forEach((player) => this.drawPlayer(player));
    }
  }

  drawPlayer(player) {
    if (!player.isAlive) return;

    this.ctx.fillStyle = player.color;
    for (let i = 0; i < player.trail.length - 1; i++) {
      const segment = player.trail[i];
      this.ctx.fillRect(
        segment.x * CELL_SIZE,
        segment.y * CELL_SIZE,
        CELL_SIZE,
        CELL_SIZE
      );
    }

    this.drawPlayerHead(player);
  }

  drawPlayerHead(player) {
    this.ctx.fillStyle = player.color;
    this.ctx.fillRect(
      player.x * CELL_SIZE,
      player.y * CELL_SIZE,
      CELL_SIZE,
      CELL_SIZE
    );
  }

  openKeyConfig() {
    document.getElementById("key-config-modal").style.display = "flex";
    this.updateKeyConfigDisplay();
  }

  closeKeyConfig() {
    document.getElementById("key-config-modal").style.display = "none";
    this.currentConfigInput = null;
  }

  startKeyConfig(input) {
    document.querySelectorAll(".key-input").forEach((el) => {
      el.classList.remove("config-active");
    });

    input.classList.add("config-active");
    input.value = "Appuyez sur une touche...";
    this.currentConfigInput = input;

    const configKeyHandler = (e) => {
      e.preventDefault();
      this.handleConfigKey(e.code, input);
      document.removeEventListener("keydown", configKeyHandler);
    };

    document.addEventListener("keydown", configKeyHandler, { once: true });
  }

  handleConfigKey(keyCode, input) {
    if (!this.currentConfigInput) return;

    const player = input.dataset.player === "1" ? "player1" : "player2";
    const direction = input.dataset.direction;

    let isDuplicate = false;
    for (const p of this.players) {
      for (const key in p.keys) {
        if (
          p.keys[key] === keyCode &&
          !(p.id === player && key === direction)
        ) {
          isDuplicate = true;
          break;
        }
      }
      if (isDuplicate) break;
    }

    if (isDuplicate) {
      input.classList.add("duplicate");
      input.value = "Doublon!";
      setTimeout(() => {
        input.classList.remove("duplicate");
        this.updateKeyConfigDisplay();
      }, 1000);
    } else {
      this.players.find((p) => p.id === player).keys[direction] = keyCode;
      this.updateKeyConfigDisplay();
    }

    input.classList.remove("config-active");
    this.currentConfigInput = null;
  }

  resetKeyMappings() {
    this.players[0].keys = {
      left: "KeyA",
      down: "KeyS",
      right: "KeyD",
      up: "KeyW",
    };
    this.players[1].keys = {
      left: "ArrowLeft",
      down: "ArrowDown",
      right: "ArrowRight",
      up: "ArrowUp",
    };
    this.updateKeyConfigDisplay();
  }

  updateKeyConfigDisplay() {
    const keyMap = {
      KeyA: "A",
      KeyW: "W",
      KeyS: "S",
      KeyD: "D",
      ArrowLeft: "←",
      ArrowRight: "→",
      ArrowUp: "↑",
      ArrowDown: "↓",
    };

    document.querySelectorAll(".key-input").forEach((input) => {
      const player = input.dataset.player === "1" ? "player1" : "player2";
      const direction = input.dataset.direction;
      const keyCode = this.players.find((p) => p.id === player).keys[direction];
      input.value = keyMap[keyCode] || keyCode.replace(/^Key/, "");
    });
  }
}

document.addEventListener("DOMContentLoaded", () => {
  const canvas = document.getElementById("tron");
  window.tronGame = new Game(canvas);
});
