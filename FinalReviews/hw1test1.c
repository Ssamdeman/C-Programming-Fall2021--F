#include<stdio.h>
#define MAXLENGTH 1000

int main (void){

    int array1 [MAXLENGTH]; // array to save
    int ch; // save the input on this letter
    int k = 0; //keep count the elements
    ch = getchar();

    while(ch != EOF ){
        array1[k] = ch;
        k++;
        ch = getchar();
    }
    array1[k] = '\0';


    for ( int i = 0; i < k; i++){
        printf("%c", array1[i] );
    }





}