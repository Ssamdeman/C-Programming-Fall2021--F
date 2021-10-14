///10-12-2021 10:52:27

#include<stdio.h>
#define MAXLENGTH 1000


int main (void){
   
   int array[MAXLENGTH];

    char userInputes[MAXLENGTH];
    int eachCharacter; // this is from Stdn input where a character is uses ASCII code
    int i = 0;
    char tempholder [MAXLENGTH];
    int p =0 ;

   if ((eachCharacter = getchar()) == '\n') {
       printf("%c",eachCharacter);
        userInputes[1] = '\0';
    }    
    else{
        while(eachCharacter != EOF){
            userInputes[i] = eachCharacter;
            ++i;
            eachCharacter = getchar();
        }
    userInputes[i] = '\0';
    for (int k = i-1; k >= 0; k++){
        tempholder[k] = userInputes[k];
        }           
    }
    tempholder[k] = '\0';
    printf("%s",tempholder);
}