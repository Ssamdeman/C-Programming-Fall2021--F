#include<stdio.h>
#define MAXLENGTH 1000
//12-07-2021 11:04:11 Classes note: Focus on the Test3 and Test 2. 
// play with linked list a lot. Like a lote. taking and remover node
//12-07-2021 12:48:23 Done.
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

    //get the last element.--d
    //printf("\n%c\n",array1[k-1]);

    
    // based on ASCII table
    if( array1[k-1] > 'a' && array1[k-1] < 'z'){
        array1[k-1] = array1[k-1] - 32;
    }
    


/* inputs
    123
    aB
    
    c 
    */

//testing the inputes;

    for ( int i = 0; i < k; i++){
        printf("%c", array1[i] );
    }


}