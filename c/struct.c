#include<stdio.h>

typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
}pokemon;
pokemon arr[10];
arr[0].attack = 50;
arr[0].hp = 100;
arr[0].speed = 30;
arr[0].tier ='A';