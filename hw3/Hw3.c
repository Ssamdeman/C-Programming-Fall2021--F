#include<stdio.h>
#include<stdlib.h>


int main(void){
    //All my variables
    int n,m; // 
    int* pt;
    //10-31-2021 10:14:43 The problem seems hard. 
        // 1) Get the size of array.---Done 
            //Find  line 1 contains n and m, separated by awhitespace ---DOne
    scanf("%d %d", &n,&m);
    int ArrayTwoDimen[n][m];
    pt = (int *) malloc((n*m) * sizeof(int));
    pt = &(ArrayTwoDimen[0][0]);

    

// 10-31-2021 10:51:28 The problem is to collect all the inputs in the ArrayTwoDimen
//using a pointer.;---D
    // 
    for(int i = 0; i < (n*m); i++){
            scanf("%d,", pt+i);
    }

    
// Find the saddle point. --- https://tinyurl.com/yhzs3b8l 

for (i = 0; i < num; i++) {
       p = 0;
       sm = a[i][0];
       for (j = 0; j < num; j++) {
           if (sm > a[i][j]) {
               sm = a[i][j];
               p = j;
           }
       }

       large = 0;
       for (j = 0; j < num; j++) {
           if (large < a[j][p]) {
               large = a[j][p];
           }
       }
       if (sm == large) {
           printf("\nValue of saddle point:%d", sm);
           f = 0;
       }
   }

   if (f > 0)
       printf("\nNo saddle point");

   return 0;


    

    
}