#include<stdio.h>

int main(void){
    //All my variables
    int n,m; // 
    int* pt;  
    //10-31-2021 10:14:43 The problem seems hard. 
        // 1) Get the size of array.---Done 
            //Find  line 1 contains n and m, separated by awhitespace ---DOne
    scanf("%d %d", &n,&m);
    int ArrayTwoDimen[n][m];
    pt = malloc((n*m) * sizeof(int));

// 10-31-2021 10:51:28 The problem is to collect all the inputs in the ArrayTwoDimen;
    // 
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d,", &ArrayTwoDimen[i][j]);
            
        }
    }
// Find the saddle point.

    

    
}