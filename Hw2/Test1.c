#include<stdio.h>


int main (){

    int* pt;
    int array [] = {1,3,4,5,6,7};
    pt = &array[0];
    int i = 2;
    printf("%d \n", *(pt + i));

}