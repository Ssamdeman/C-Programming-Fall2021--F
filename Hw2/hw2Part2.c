#include <stdio.h>

#define MAXVALUE 1000



int main (void){

    int n = 0; /// length of the array A;
    int m = 0; // length fo the array B;


    scanf("%d %d", &n, &m);

    int arrayA [n];
    int arrayB [m];
    
    for(int i = 0; i < n; i++){
        scanf("%d," ,arrayA[i]);
        printf("I am here");
        
    }
    for(int k = 0; k < m; k++){
        scanf("%d,", arrayB[k]);
    }

    for(int p = 0; p < n; p++) printf("%d", arrayA[p]);

    return 0;

}