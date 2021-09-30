#include<stdio.h>

int i;
extern void p();
int main(){
    p();
    printf("%d\n", i);
    return 0;
}

/* 09-30-2021 11:37:49 did not work. It could not be connected to the next extern file and. */