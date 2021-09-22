#include<stdio.h>
#define MAXLENGTH 1000

/* The problem of the Hw1 is that to read from user inpute and
 only select the charcter that is char and make them cappital.
 So use get line funtion. Do not import any function just 
 */

//This function allows to convert small letter to the big one.
/* char touUpper (char OneCharacter) {
    char  

    }  */

int main(void) {

    char userInputes[MAXLENGTH];
    int eachCharacter; // this is from Stdn input where a character is uses ASCII code
    int i =0; // keeping track of userInputes

/*  This is not working. this is just a solution too.
  for (eachCharacter = getchar();(eachCharacter = EOF);i++){
       userInputes[i] = eachCharacter;
       printf("print every latter; %s", userInputes);
   }
 */

/*  EOF: a special int constant
representing the end of file (in
this case, end of standard input) */
/* Ideas number 1: 
    So this snippet will accomplished inpute intput3,4 and 2 from HW but
    NOT the in put1 09-22-2021 13:53:54 */
    

    while(1){
        eachCharacter = getchar();
        userInputes[i] = eachCharacter;
        i++;
        if (eachCharacter != EOF && eachCharacter == '\0' ){
            printf("%c", userInputes[i]);
            break;
        }
        
       
        }
    


   /*  while(eachCharacter != EOF && eachCharacter == '\0' ){

        eachCharacter = getchar();
        userInputes[i] = eachCharacter;
        i++; */
        ///putchar(eachCharacter);
    /// @09/21/2021 check 09212021Part1 in week2 that help with Hw1.
    
    char lastElement = userInputes[i];
    printf("Priting this %c \n",lastElement );
    userInputes[i] = '\0';
    if (lastElement != '\0'){


    } 

    
    /* Work on this later.
     int userInputeLength = strlen(userInputes);
    if (userInputes[userInputeLength - 1] == )
    else
        printf("Empty String");
    
 */
   printf("I am herer %s \n", userInputes);

    /*  
    int userInpute = getchar();
    printf("%s \n",userInpute );
    //putchar(userInpute "\n"); */
}

