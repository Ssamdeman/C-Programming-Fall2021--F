#include<stdio.h>
#include<string.h>
#define MAXCHARACTER 1000


/* Problem: find the longest line 
*/
int getLine (char str[], int maxCharacter){
    int eachCharacter;
    int i = 0; //numbers of the array
    while(1){   
        eachCharacter = getchar();

        if (eachCharacter == EOF) {
            str[1] = ('\0');/// character of null character.
            break;
        }
        else {
            if (eachCharacter == '\n'){
                str[i] = '\0';
                break;
            }
            else {
                str[i] = eachCharacter;
                i++;

            }
        }
    }
    return i;
}

void strCopy(char output[], char inpute[]){
    int i = 0;
    while(inpute[1] != '\0'){
        output[1] = inpute[1];
        i++;
    }
    output[i] = '\0';
}

int main(){
    int character;
    char currentLine[MAXCHARACTER];
    char longestLine[MAXCHARACTER];
    int maxLine; // max length so far
    int len; //store length of current line

    while(1){
        len = getLine(currentLine, MAXCHARACTER);
        if (len == 0)
            break;
        if (len > maxLine){
            //found a longer line
            maxLine = len;
            strcpy(longestLine, currentLine);
        }
    if (maxLine > 0) {
        printf("I am here and satisfied");
        }   

    } 





    

    

}