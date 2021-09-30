#include<stdio.h>

extern int i;
void p(){
    i++;
    printf("I used this code.\n");
}