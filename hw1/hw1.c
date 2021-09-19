#include<stdio.h>
#define MAXLENGTH 1000

/* The problem of the Hw1 is that to read from user inpute and
 only select the charcter that is char and make them cappital */

int main() {

    char userInpute[MAXLENGTH];
    int oneCharacter;  
    oneCharacter = getchar();
/*  EOF: a special int constant
representing the end of file (in
this case, end of standard input) */
/* So this snippet will accomplished inpute intput3,4 and 2 from HW but
 NOT the in put1 */
    
    while(oneCharacter != EOF){
        putchar(oneCharacter);
        oneCharacter = getchar();
        
    }

    /*  
    int userInpute = getchar();
    printf("%s \n",userInpute );
    //putchar(userInpute "\n"); */
}

