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
  

    int min;
    int max;
    int* minPt;
    int* maxPt;

    minPt = (int*) malloc((int) (n) * sizeof(int)); // for row
    maxPt = (int*) malloc((int) (m) * sizeof(int)); // for column


// min of the row
    for(int l = 0; l < n; l++) {
        min = *(pt + l*m);
        for(int k = 1; k < m; k++){
            if(min > *(pt + k + l * m)) min = *(pt + k + l * m);
            }
        *(minPt + l) = min;
    }
    
    //Finding all the small values int he hwole array
    int max = *(minPt);
    for(int q = 1; q < n; q++) {
        if (*(minPt + q) < max){
            max = *(minPt + q);
        }
    }
    
    int temp;
    for(int i= 0; i < m; i++){
        temp = max;
        for (int j = 0; j < n; j++){
            if(*(pt + i + j*m) > temp) temp = *(pt + i + j*m);
        }
        *(maxPt + i) = temp;
    }

    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++;)
            if(*(minPt + i)== *(maxPt+j))
            {
                printf("%d", *(minPt+i));

            }

    }

    return 0;



//a[n1][n2] address of a[i][j] = p + i * n2 +j


/* 3 3
1,2,3
4,5,6
7,8,9

 */

// Find the saddle point. --- https://tinyurl.com/yhzs3b8l 

}