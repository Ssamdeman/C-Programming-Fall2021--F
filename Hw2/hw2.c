#include <stdio.h>

#define MAXVALUE 1000

int main (void){
    ///10-10-2021 19:50:25 get the the input from the stdin
    // Get the first two input.
    char eachCharacter;
    char userInputes[MAXVALUE];
    int i; // tracker for user inputes
     printf("I am here \n");
    if ((eachCharacter = getchar()) == '\n') {
        printf("%c",eachCharacter );
        userInputes[1] = '\0';
        printf("I am here");
    }
    else{
        while(eachCharacter != EOF){
            userInputes[i] = eachCharacter;
            ++i;
            eachCharacter = getchar(); 
        }
    userInputes[i] = '\0';
    }
    printf("I am here %s \n", userInputes); 


    


}