#include <stdio.h>

#define MAXVALUE 1000


//10-14-2021 11:31:06 We can use SCANF(%d,  %value.)
int main (void){

    int str[MAXVALUE];
    int i = 0;
    while((str[i]= getchar()) != EOF) i++;
    scanf();
     
    for(int k = 0; k < i; k++){
        printf("%d and  %c ", k, str[k]);

    }















}
    /* /// 10-14-2021 11:22:28 this code is not working so I found better solution;
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
    }
    userInputes[i] = '\0';
    
    printf("%s \n", userInputes);
} */
 