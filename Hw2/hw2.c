#include <stdio.h>

#define MAXVALUE 1000

int main (void){
    ///10-10-2021 19:50:25 get the the input from the stdin
    // Get the first two input.
    //10-12-2021 22:41:22 the big issue is that the Pc is functioning differently and then my MAC. yea so using this PC for now is useless. 
    //10-12-2021 23:02:09 I have used from stackoverflow. Let's see what they will say. 
    char eachCharacter;
    char userInputes[MAXVALUE];
    int i = 0; // tracker for user inputes
    eachCharacter = getchar();
    
    if (eachCharacter == '\n') {
        printf("%c",eachCharacter );
        userInputes[i] = '\0';
    }
    else{
        while(eachCharacter != EOF){
            userInputes[i] = eachCharacter;
            i++;
            eachCharacter = getchar(); 
        }
    userInputes[i] = '\0';
    }
    int* pt;
    pt = &i;
    for (int k = 0; k < i; k++){
        printf("%d -- %c\n",k, userInputes[k])
        
    }
    
    printf("\n%c and the number of element %d\n", userInputes, i);

}