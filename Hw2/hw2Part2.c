#include <stdio.h>

#define MAXVALUE 1000



int main (void){

    int n = 0; /// length of the array A;
    int m = 0; // length fo the array B;


    int x; // main savefor the for input
    int t = 0; // for array 3
    int checker;

    /// pointers for all the arrays;
    int* ptone;
    int* pttwo;
    int* ptthree;

    scanf("%d ", & n);
    scanf("%d ", & m);


   

    if(n == 0 && m ==0) {
        printf("\n");
      
    }

    int arrayA [n];
    int arrayB [m];
    int arrayC [n+m]; // organized 
    
    ptone = arrayA;
    pttwo = arrayB;
    ptthree = arrayC;
    
    for(int i = 0; i < n; i++){
        scanf("%d,", &x);
        //while((checker = getchar()) != '\n'){}
        *(ptone + i) = x;
    }
    
    while((checker = getchar()) != '\n'){}
    
    for(int k = 0; k < m; k++){
        scanf("%d,", &x);
        //while((checker = getchar()) != '\n'){}
        *(pttwo + k) = x;
    }

    /* for(int w = 0; w < n; w++){
        printf("%d,", arrayA[w]);
    }
    for(int w = 0; w < m; w++){
        printf("%d,", arrayB[w]);
    } */

    for(int y = 0; y < n; y++){
        *(ptthree + t) = *(ptone + y);
        t++;
    }
    for(int y = 0; y < m; y++){
        *(ptthree + t) = *(pttwo + y);
        t++;
    }

    int temp;
     for (int i = 0; i < n+m; i++){
        for (int j = 0; j < ((n+m) - i - 1); j++){
            if (arrayC[j] > arrayC[j + 1]){
                temp = arrayC[j];
                arrayC[j] = arrayC[j + 1];
                arrayC[j + 1] = temp;
            }
        }
    }




   /*  for(int r = 0; r <(n+m); r++){
        if(arrayC[r] <= arrayC[r+1] )
            arrayC[r] = arrayC[r];
        else{
            arrayC[r+1] =   
        }
    } */
    
    
    // this function is not working


   int tempHolder;
    for (tempHolder = 0; tempHolder < n + m - 1; tempHolder++) {
        printf("%d,", *(ptthree + tempHolder));
    }
    if (tempHolder != 0) {
        printf("%d", *(ptthree + tempHolder));
    }

    
    return 0;


}