#include<stdio.h>
#include<stdlib.h>


int main (){

   char* p;
   char b [2][2][3] = {
    {{'a','b','c'}, {'d','e','g'}},
    {{'1','2','3'}, {'x','y','z'}}
};
  /*  int array[][3] = {{1,2,3},
                    {4,5,6},
                    {9,8,7}};

 */    
    p = (char *) malloc((9) * sizeof(char));
    p = &(b[0][0][0]);
    *(p+1) = '4';
    printf("%c \n", *(p+11));
}