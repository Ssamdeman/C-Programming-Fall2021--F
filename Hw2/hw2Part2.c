#include <stdio.h>

#define MAXVALUE 1000



int main (void){

    int n = 0; /// length of the array A;
    int m = 0; // length fo the array B;

    int x; // main savefor the for input


    scanf("%d %d", &n, &m);

    int arrayA [n];
    int arrayB [m];
    
    for(int i = 0; i < n; i++){
        scanf("%d,", &x);
        arrayA[i] = x;
    }
    
    for(int k = 0; k < m; k++){
        scanf("%d,", &x);
         arrayA[k] = x;
    }


    return 0;

}