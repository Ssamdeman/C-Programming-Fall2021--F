#include<stdio.h>

void exhcangeValue(int* a, int* b){
    int tempValue;
    tempValue = *a;
    *a = *b;
    *b = tempValue;
    
}

int main (void){
    char c;

    int x = 10;
    int y = 15;
    //we want to change the x and y values respctivally 
    printf("Before: %d %d\n", x,y);
    exhcangeValue(&x, &y);
    printf("After %d %d\n", x, y );

}