#include<stdio.h>
#define MAXLENGTH 1000



/* 09-27-2021 12:24:44 Working with clean state. I know how to solve it. I just need to implement it.*/
/* void getUserInput(char stdoInput[]){ 09-28-2021 10:47:57 hold on this.
    int c, i;
    printf("I am here \n");

    c = getchar();

    while (c != EOF){
        stdoInput[i] = c;
        i++;
    }
    stdoInput[i] = '\0';
   
} */



int main(void){
    /* 09-28-2021 12:31:32 my code taking an inpute and print it out in corrent order.
     The problem is to making the letter capital. 
     09-29-2021 10:13:45 noted: userInputes[i-1] is get the last chracter of the array.*/
    char userInputes[MAXLENGTH];
    int eachCharacter; // this is from Stdn input where a character is uses ASCII code
    int i = 0; // keeping track of userInputes index
    int convertedCapitalLetter;

    if ((eachCharacter = getchar()) == '\n') {
        printf("%c",eachCharacter );
        userInputes[1] = '\0';
    }
    else{
        while(eachCharacter != EOF){
            userInputes[i] = eachCharacter;
            ++i;
            eachCharacter = getchar(); 
        }
    userInputes[i] = '\0';

    // 32 is the # for differenece between small letter and cappital letter.
    if (userInputes[i-1] >= 97 && userInputes[i-1] <= 122){ // tells if the last character is a lower alphabet.
        convertedCapitalLetter = userInputes[i-1] - 32;
        userInputes[i-1] = convertedCapitalLetter;
    }
    
    }

    printf("%s \n", userInputes);
}   

/* -------------------------------------------------------------------------- */
/*                   This is the example that solves the hw1.  

int getline(char s[], int lim) { //take in argument of str  and int and saves the string and outpits int.
    int c, i;

    for (i= 0; i < lim-1 &&(c = getchar()) != EOF && c != ‘\n’; ++i)
        s[i] = c;

    if (c = = ‘\n’) {
        s[i] = c;
        ++i;
     }
    s[i] = ‘\0’; 
    return i; 



int main ( ){

    int len, max=0;
    char line[MAXLINE], longest[MAXLINE];

while ((len = getline(line, MAXLINE)) > 0)

        if (len > max) {
            max = len;

    }

    if (max > 0) printf (“%s”, longest);

    return 0;
} 


 */
/* -------------------------------------------------------------------------- */
