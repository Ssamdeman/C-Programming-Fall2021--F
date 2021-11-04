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
int p,sm,f,large;
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
       for (int j = 0; j < n*m; j++) {
           if (large < ArrayTwoDimen[j][p]) {
               large = ArrayTwoDimen[j][p];
           }
       }
       if (sm == large) {
           printf("%d", sm);
           f = 0;
       }
   }

   if (f > 0)
       printf("");

   return 0;

}