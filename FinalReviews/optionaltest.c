#include<stdio.h>

#define MAXLENGTH 10000




int main(void){
   
    char userInputes[MAXLENGTH];
    int eachCharacter; // this is from Stdn input where a character is uses ASCII code
    int i = 0; // keeping track of userInputes index
    int convertedCapitalLetter;

    
    eachCharacter = getchar();
    while(eachCharacter != EOF) {
            userInputes[i] = eachCharacter;
            i++;
            eachCharacter = getchar();
    }
    userInputes[i] = '\0';/// last digit.

    // 32 is the # for differenece between small letter and cappital letter.
  /*   if (userInputes[i-2] >= 97 && userInputes[i-2] <= 122){ // tells if the last character is a lower alphabet.
        convertedCapitalLetter = userInputes[i-2] - 32;
        userInputes[i-2] = convertedCapitalLetter;
    } */
    for(int k = 0; k < i; k++){
        if(userInputes[k] >= 65 && userInputes[k] <= 90  ){
            convertedCapitalLetter = userInputes[k] + 32;
            userInputes[k] = convertedCapitalLetter;
        }else if (userInputes[k] >= 97 && userInputes[k] <= 122 ){
            convertedCapitalLetter = userInputes[k] - 32;
            userInputes[k] = convertedCapitalLetter;
        }

    }

    
    printf("%s\n",userInputes);
}   