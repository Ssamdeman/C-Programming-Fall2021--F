#include <stdio.h>

#define MAXVALUE 1000

int main (void){
    ///10-10-2021 19:50:25 get the the input from the stdin
    // Get the first two input.
    char eachCharacter;
    char userInputes[MAXVALUE];
    int i; // tracker for user inputes
    eachCharacter = getchar();
    if (eachCharacter != '\n' && eachCharacter != EOF){
        printf("I am here");
        while (eachCharacter != '\n'){
        userInputes[++i] = eachCharacter;
        printf("I am here2");
        eachCharacter = getchar();
        }
    }
    




    int a ; /// First  arary but to complete this I need the input numbes.
    int b ; /// Second Array.

    


}