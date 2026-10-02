document.addEventListener("DOMContentLoaded", () => {
    document.getElementById("btn-title").addEventListener("click", () => {
      alert(document.title);
    });
  
    document.getElementById("btn-tree").addEventListener("click", () => {
      const out = [];
      traverse(document.documentElement, 0, out);
      document.getElementById("dump").textContent = out.join("\n");
    });
  });
  

  function traverse(node, depth, outArr) {
    const indent = "  ".repeat(depth);
    outArr.push(`${indent}${node.nodeName}`);
    node.childNodes.forEach(child => traverse(child, depth + 1, outArr));
  }

  



  function modifTitre(root = document.documentElement) {
    const h = cherchePremier(n => n.nodeType === 1 && n.nodeName === "H1", root);
    if (!h) return;
    for (const e of h.childNodes) {
      if (e.nodeType === 3) {
        e.nodeValue = e.nodeValue.trimEnd() + " (DOM)";
        return;
      }
    }
    h.textContent = h.textContent + " (DOM)";
  }
  
  function texteMaj(node) {
    if (!node || !node.childNodes) return;
    node.childNodes.forEach(e => {
      if (e.nodeType === 3 && e.nodeValue) e.nodeValue = e.nodeValue.toUpperCase();
    });
  }
  
  function h1Maj(root = document.documentElement) {
    const h = cherchePremier(n => n.nodeType === 1 && n.nodeName === "H1", root);
    if (h) texteMaj(h);
  }
  
  function titresMaj(root = document.documentElement){
    if (!root) return;
    if (estTitre(root)) texteMaj(root);
    root.childNodes.forEach(e => titresMaj(e));
  }
  
  function estTitre(node){
    return node && node.nodeType === 1 && (node.nodeName === "H1" || node.nodeName === "H2");
  }
  
  function unquelconque(f, node){
    if (!node) return false;
    if (f(node)) return true;
    for (const e of node.childNodes) {
      if (unquelconque(f, e)) return true;
    }
    return false;
  }
  
  function cherchePremier(f, node) {
    if (!node) return null;
    if (f(node)) return node;
    for (const e of node.childNodes) {
      const r = cherchePremier(f, e);
      if (r) return r;
    }
    return null;
  }
  
  document.addEventListener("DOMContentLoaded", () => {
    modifTitre();
  });
  