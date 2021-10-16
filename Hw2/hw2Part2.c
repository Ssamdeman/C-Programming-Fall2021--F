#include <stdio.h>

#define MAXVALUE 1000



int main (void){

    int n = 0; /// length of the array A;
    int m = 0; // length fo the array B;

    int x; // main savefor the for input
    int t = 0; // for array 3
    /// pointers for all the arrays;
    int* ptone;
    int* pttwo;
    int* ptthree;

    scanf("%d %d", &n, &m);

    int arrayA [n];
    int arrayB [m];
    int arrayC [n+m]; // organized 
    
    ptone = arrayA;
    pttwo = arrayB;
    ptthree = arrayC;
    
    for(int i = 0; i < n; i++){
        scanf("%d,", &x);
        arrayA[i] = x;
    }
    
    for(int k = 0; k < m; k++){
        scanf("%d,", &x);
        arrayB[k] = x;
    }
    /* for(int w = 0; w < n; w++){
        printf("%d,", arrayA[w]);
    }
    for(int w = 0; w < m; w++){
        printf("%d,", arrayB[w]);
    } */
    
    // this function is not working
    int q;
    int p;
    while (q < n && p < m) {
        if (arrayA[q] < arrayB[p]) {
            *(ptthree + t) = *(ptone + q);
            t++, q++;
        }
        else {
            *(ptthree + t) = *(pttwo + p);
            t++, p++;
        }
    }
     for(int w = 0; w < m+n ; w++){
        printf("%d,\n", arrayC[w]);
    }
  

   /* int tempHolder;
    for (tempHolder = 0; tempHolder < n + m - 1; tempHolder++) {
        printf("%d,", *(ptthree + tempHolder));
    }
    if (tempHolder != 0) {
        printf("%d", *(ptthree + tempHolder));
    } */

    //for (int h = 0; h < (n+m) ; h++) printf("%d,", arrayC[h]);
    return 0;


}