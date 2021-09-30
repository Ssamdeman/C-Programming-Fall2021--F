#include<stdio.h>
/* 09-30-2021 11:18:51 This func is not working. So try to figure it out why  */
void echanger(int *pa, int *pb){
    int dummy;
    dummy = *pa;
    *pa = *pb;
    *pb = dummy; 
} 

int main(void) {
    char x = '1';
    char y = 9;
    echanger(&x, &y); /// (&) gives the address of the 
    printf("%lu\n", sizeof(float));

}