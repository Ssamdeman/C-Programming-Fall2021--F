#include<stdio.h>
#include<stdlib.h>

#define MAXLENGTH 1000

int main (void){
    //how to get text from stdio.
    char* ch;
    int c = 1; //counter;
    ch = (char*) malloc( MAXLENGTH * ((sizeof(char)+1)));
    
    scanf("%s ",ch);
    printf("%s\n", ch);

}