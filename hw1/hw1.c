#include<stdio.h>
#define MAXLENGTH 1000

/* The problem of the Hw1 is that to read from user inpute and
 only select the charcter that is char and make them cappital.
 So use get line funtion. Do not import any function just 
 */

//This function allows to convert small letter to the big one
//09-22-2021 15:34:30 Hold on it cause my basic function is not taking any inpute.
/* char touUpper (char OneCharacter) {
    char  

    }  */

int main(void) {

    char userInputes[MAXLENGTH];
    int eachCharacter; // this is from Stdn input where a character is uses ASCII code
    int i =0; // keeping track of userInputes index

/*  EOF: a special int constant
representing the end of file (in
this case, end of standard input) */
/* Ideas number 1: 
    So this snippet will accomplished inpute intput3,4 and 2 from HW but
    NOT the in put1 09-22-2021 13:53:54 */

//09-23-2021 11:28:52 use getline(own function) funtion where I will save the all the inputes.
/* -------------------------------------------------------------------------- */
/* 09-23-2021 11:29:03 so this program does not work becuase it does not take care of special case. So 
   so we need to get line first and read the from the line.
    while(1){
        eachCharacter = getchar();
        if (eachCharacter == EOF){
            userInputes[1] = '\0';
            break;
        }
        else{
            if (eachCharacter == '\n' ){
            userInputes[i] = '\0';
            break;
            }
            else{
                userInputes[i] = eachCharacter;
                i++;  
            }
        } 
    }  
 */
/* -------------------------------------------------------------------------- */

    /*  while(eachCharacter != EOF && eachCharacter == '\0' ){

        eachCharacter = getchar();
        userInputes[i] = eachCharacter;
        i++; */
    ///putchar(eachCharacter);
    /// @09/21/2021 check 09212021Part1 in week2 that help with Hw1.

    /*  char lastElement = userInputes[i];
    printf("Priting this %c \n",lastElement );
    userInputes[i] = '\0';
    if (lastElement != '\0'){

    }  */

    
    /* Work on this later.
     int userInputeLength = strlen(userInputes);
    if (userInputes[userInputeLength - 1] == )
    else
        printf("Empty String");
    
 */
   printf("I am here %s \n", userInputes);

    /*  
    int userInpute = getchar();
    printf("%s \n",userInpute );
    //putchar(userInpute "\n"); */
}