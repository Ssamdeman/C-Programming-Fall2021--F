#include <stdio.h>

#define MAXVALUE 1000

int main (void){

    char userInputes[MAXVALUE];
    int eachCharacter; // this is from Stdn input where a character is uses ASCII code
    int i = 0; // keeping track of userInputes index
    int convertedCapitalLetter;

    if ((eachCharacter = getchar()) == '\n') {
        printf("%c",eachCharacter );
        userInputes[0] = '\0';
    }
    else{
        while(eachCharacter != EOF){
            userInputes[i] = eachCharacter;
            ++i;
            eachCharacter = getchar(); 
        }
    userInputes[i] = '\0';
    }
    for(int k = 0; k < i; k++) 
        printf("%s", userInputes[k]);

    printf("%s \n", userInputes);
}
 