#include<stdio.h>

///Printing array of 1 dimention
void printArrays(int* p, int n) {
        int i;
        for (i = 0; i < n - 1; i++) printf("%d,", *(p+i));
        printf("%d", *(p+i));
    }


int main (void){

    


//-----------------------------------------------------------------------------------------
    int array1 [2][3]; //2 rows and 3 columns


    int* p0, p1;
    p0 = array1[0];
    p1 = array1[1];

    printf{"arrays1[0][2] %d\n", *(p0+2)}

    int* ptarray[2];
    ptarray[0] = a[0];
    ptarray[1] = a[1];
    printf("arrays1[0][2] %d\n", *(ptarray[0]+2))

    


    char arrayChracter[2][3][5];

    //without the pointers
    for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            array1[i][j] = i+j;
        }
    }

     for (int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            for (int k = 0; k < 5;k++){
                arrayChracter[i][j][k] = i*j*k;
            }
        }
    }
     
//-----------------------------------------------------------------------------------------
    
    
    //here is the same thing with pointer;
    int x [] = {10, 20,30};
    int* ptInt;
    ptInt = x;

    int y [][3] = {{10,20,40}, {100, 200,400}};
    int z [2][3][4] = {
        {{10,20,40,50},{10,20,40,50},{10,20,40,50}},
        {{10,20,40,50},{10,20,40,50},{10,20,40,50}}

    };








/*     int* pt;
    int x = 19;
    pt = &x;
    int j = 10;
   

    printf("%lu\n", (unsigned long int)&pt);
    printf("%lu\n", (long int) pt);
    printf("%d\n", *pt);
*/

}