#include<stdio.h>

int main (){
    /*
    Array must have 0 in the end of the array.
     */
    
    int c,i;
    int inDigit[10];

    for(i = 0;i <= 9; i++)
        inDigit[i] = 0;

    while ((c = getchar()) != EOF){
        if (c >= '0' && c <= '9') // c is the digital character
            //increment the digit
            ++inDigit[c - '0'];
    } 
    printf("counts: \n");
    for (i=0; i <= 9; i++){
        printf("inDigit[%d = %d \n", i , inDigit[i]);
     }  
     return 1;

}

