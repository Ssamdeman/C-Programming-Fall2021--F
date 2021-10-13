#include <stdio.h>

#define MAXVALUE 1000

int main (void){
    ///10-10-2021 19:50:25 get the the input from the stdin
    // Get the first two input.
    //10-12-2021 22:41:22 the big issue is that the Pc is functioning differently and then my MAC. yea so using this PC for now is useless. 
    //10-12-2021 23:02:09 I have used from stackoverflow. Let's see what they will say. 
    char eachCharacter;
    char userInputes[MAXVALUE];
    int i; // tracker for user inputes
    eachCharacter = getchar();

    if (eachCharacter == '\n') {
        printf("%c",eachCharacter );
        userInputes[1] = '\0';
        printf("I am here");
    }
    else{
        while(eachCharacter != EOF){
            userInputes[i] = eachCharacter;
            i++;
            eachCharacter = getchar(); 
        }
    userInputes[i] = '\0';
    }
    printf("I am here %s \n", userInputes);

}