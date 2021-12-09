#include<stdio.h>
#define MAXLENGTH 1000

int main(void){


    // use array and use the getchar.
    char array1 [MAXLENGTH]; // save all the input here
    

    int ch; // vraiblae to the gettching a char
    int k = 0; // counter for every word;

    // my while statement is not working. 
    while (ch = getchar() != EOF){
        array1[k] = ch;
        k++;
        printf("%d ", k);
        printf("I am here \t");
        ch = getchar();
    }



    array1[k] = '\0';
    // My loops is always have been a problem. So test everytime. 
    
    for(int i = 0; i < k; i++){
        printf("%c",array1[i] );
    }

    



    
}

/* //inputes 

123a
B

c

 */

