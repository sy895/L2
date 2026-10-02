#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int health;
    int armor;
    int score ;
} Player;


void modif(Player *p){
    p->health-=10;
    p->armor+=10;
    p->score+=50;
}

int main (){
    Player p1={100,100,0};
    modif(&p1);
    printf("health = %d \n",p1.health);
    printf("armor = %d \n",p1.armor);
    printf("score = %d \n",p1.score);

    return 0;
}