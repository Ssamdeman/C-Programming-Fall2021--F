#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAXLENGTH 1000

int main (void){
    /* -------------------------------------------------------------------------- */
                /* CODE FROM INTERNET*/
    //char *fgets(char *str, int n, FILE *stream)
    //Might be another option
     char* c;
    c = (char*) malloc( MAXLENGTH * ((sizeof(char)+1)));
    fgets(c, MAXLENGTH, stdin);
    printf("%s\n", c);
     


    /* -------------------------------------------------------------------------- */




    //how to get text from stdio.
    //i learned how to do it. 
    char ch;
    char* arry_word;
    int counter = 1; //counter;
    arry_word = (char*) malloc( MAXLENGTH * ((sizeof(char)+1)));
    scanf("%s", &ch);
    while (ch != EOF) {
        printf("%c\n", ch);
    }
    

    //Binary Tree. takes in Sorted. 
        //1) first the inpute and then put in the binery tree. https://hackr.io/blog/binary-search-in-c
}