#include <stdio.h>

#define MAXVALUE 1000


//10-14-2021 11:31:06 We can use SCANF(%d,  %value.)
int main (void){

    char str[MAXVALUE];
    int i = 0; // this for the all the input
    char m_n [MAXVALUE];
    //int q = 0; // for the innnisfilzied the two array
   
    while((str[i]= getchar()) != EOF) {
        i++;
    }
    str[i] = '\0';
   // printf("%s", str);
    //above code is working fine and doing what I wanna do it.



  /*   for(int q = 0; q < i; q++){
        if (str[q] == ',') m_n[q] = str[q];
        if (str[q] == '\n'){
            m_n[q] = '\0';
            break;
            }
    } */
    //10-14-2021 18:30:15 this is still not working well. Fuck.
    printf("%s \n", m_n);










    /* 10-14-2021 18:23:00 this is not working. Find other solutions
    while(str[q] != '\n') { /// if str = new line --> I collected the first two value.
       if(str[q] == ' '){
           printf("%c", str[q]);
       }
       q++;
    } */
    
    

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
 