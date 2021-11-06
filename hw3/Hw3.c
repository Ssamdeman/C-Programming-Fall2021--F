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
    // m = mumber of column; n = number of rows;
    pt = (int *) malloc((n*m) * sizeof(int));

    

// 10-31-2021 10:51:28 The problem is to collect all the inputs in the ArrayTwoDimen
//using a pointer.;---D
    // 
    for(int i = 0; i < (n*m); i++){
        scanf("%d,", (pt+i));
    }
  

    int min, max;

    int* minPt, maxPt;
    minPt = (int*) malloc((int) (n) * sizeof(int));
    maxPt = (int*) malloc((int) (m) * sizeof(int));


  for(int l = 0; l < n; l++) {
    min = *(pt + l*m);
    for(int k = 0; k < m; k++){
        if(min > *(pt + k + l * m)) min = *(pt + k + l * m);
        }
     *(minPt + l) = min;
    }

    max = *(pt);
    


    for(int l = 0; l < n; l++) {
        max = *(pt + l*m);
        for(int k = 0; k < m; k++){
            if(min > *(pt + k + l * m)) min = *(pt + k + l * m);
            }
        *(minPt + l) = min;
    }




//a[n1][n2] address of a[i][j] = p + i * n2 +j


/* 3 3
1,2,3
4,5,6
7,8,9

 */

// Find the saddle point. --- https://tinyurl.com/yhzs3b8l 




/* int p,sm,f,large;
for (int i = 0; i < n*m; i++) {
       p = 0;
       sm = ArrayTwoDimen[i][0];
       for (int j = 0; j < n*m; j++) {
           if (sm > ArrayTwoDimen[i][j]) {
               sm = ArrayTwoDimen[i][j];
               p = j;
           }
       }
       large = 0;
       for (int k = 0; k < n*m; k++) {
           if (large < ArrayTwoDimen[k][p]) {
               large = ArrayTwoDimen[k][p];
               
           }
       }
       if (sm == large) {
           printf("Value of saddle point:%d", sm);
           f = 0;
       }
   }

   if (f > 0)
       printf(" ");

   return 0; */

}