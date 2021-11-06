#include<stdio.h>
#include<stdlib.h>


int main(void){
    int n,m; // 
    int* pt;
    //10-31-2021 10:14:43 The problem seems hard. 
        // 1) Get the size of array.---Done 
            //Find  line 1 contains n and m, separated by awhitespace ---DOne
    scanf("%d %d\n", &n,&m);
    // m = mumber of column; n = number of rows;
    pt = (int *) malloc((n*m) * sizeof(int));

    int temp;

    if ((n == 0) || (m == 0)){
        return 0;
    }
    else{
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if (j == (m-1)){
                    scanf("%d", &temp);
                    *(pt + j + m*i) = temp;
                }else{
                    scanf("%d,", &temp);
                    *(pt + j + m*i) = temp;
                }

            }
            char ch;
            while (scanf("%c", &ch) && (ch != '\n')) {
                scanf("%c", &ch);
            }
        }

    
    
        int min;
        int max;
        int* minPt;
        int* maxPt;

        minPt = (int*) malloc((int) (n) * sizeof(int)); // for row
        maxPt = (int*) malloc((int) (m) * sizeof(int)); // for column


    // min of the row
        for(int l = 0; l < n; l++) {
            min = *(pt +  l*m);

            for(int k = 1; k < m; k++){
                if( *(pt + k + l * m) < min) min = *(pt + k + l * m);
                }
            *(minPt + l) = min;
            
        }
        
        //Finding all the small values int  array
        max = *(minPt);
        for(int q = 1; q < n; q++) {
            if (*(minPt + q) < max) max = *(minPt + q);
        }
        
        int temp2;
        for(int i= 0; i < m; i++){
            temp2 = max;
            for (int j = 0; j < n; j++){
                if(*(pt + i + j*m) > temp2) temp2 = *(pt + i + j*m);
            }
            
            *(maxPt + i) = temp2;
        }

        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++) {

                if(*(minPt + i) == *(maxPt+j)){

                    printf("%d", *(minPt + i));
                    return 0;
                }
            }

        }
    } return 0;
}
/* Error
3 4 
-1,-2,-1,3,-1
-3,-5,-2,3,-5
0,0,0,1

Working
3 3
8,1,9
7,2,6
3,4,5

Working
3 3
-2,15,-2
-5,-7,-4
-6,20,-8 

working;
3 3
1,2,3
4,5,6
7,8,9



*/

//a[n1][n2] address of a[i][j] = p + i * n2 +j


// Find the saddle point. --- https://tinyurl.com/yhzs3b8l 

