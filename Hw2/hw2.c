#include <stdio.h>

#define MAXVALUE 1000


//10-14-2021 11:31:06 We can use SCANF(%d,  %value.)
    // 10-15-2021 16:39:34 I was able to get the length of the array.
int main (void){

    
    int n = 0; /// length of the array A;
    int m = 0; // length fo the array B;

    int i = 0; // intertator for array A
    int k = 0;  /// iterrator for array B
    

    int x; // main savefor the for input

    printf("Enter chracter: ");

    
    //if( x == ' ') printf("I am here \n");

    /// geting the firs line.
    while((scanf("%d", &x)) != EOF){

        if(x >= 0 && x <= MAXVALUE) n = x;
        scanf("%d", &x);
        if(x >= 0 && x <= MAXVALUE) m = x;
        
        if ( (m >= 0 && m <= MAXVALUE) && (n >= 0 && n <= MAXVALUE)) {
         break;
        
         }
    }

    scanf("%d", &x);

    int arrayA [n];
    // reading the second line for getting all the A.
    while(x != EOF){
        printf("I am here");
        arrayA [i] = x;
        i++;
        scanf("%d", &x);
        if(i == n) break;
    }

    int arrayB [m];
    //reading the third line for getting all the A.
    while((scanf("%d", &x)) != EOF){
        arrayB [k] = x;
        k++;
        scanf("%d", &x);
        if(k == m) break;
    }
    // sort the two arrays.
    int sortedArray[n+m];

/*     for(int j = 0; j < (n+m); j++){
        if (arrayA[j] <= arrayB[j] || arrayB[j] <= arrayA[j]);
    }
 */

   printf("Entered numbers: %d and %d \n", n, m);

   
   return(0);
    
   

    







}
/* -------------------------------------------------------------------------- */
/*                             10-15-2021 09:29:15  SIDE NOTES
    scanf("%d", &x); /// without the &, the scan func works but it does not save it. 
    this funtion takes space and new line;
    maximun digit is 11 digits.

    input:
2 3 
1,3 
2,4,6 

/* -------------------------------------------------------------------------- */

















































































    /* -------------------------------------------------------------------------- 
                    10-15-2021 08:40:43 this is still not working. Like I feel like it should be working but it's not./
                        it is showing strange a behvarior with inconsistent outcome for fix inputs. so ask help from professor. 
                        and figure out what/how to do this work: the goal is to work get the input from stdin and save the all the inpute until we see a space;            
     -------------------------------------------------------------------------- 
     while((str[i]= getchar()) != EOF) {
        i++;
    }
    str[i] = '\0';
    printf("%s\n", str);
    //above code is working fine and doing what I wanna do it.
    for(int w = 0; w < i; w++){
        printf(" %d and %c \n", i, str[w]);
    }

    for(int p; p < i; p++){ // save the inputs before "space" and 
        if (str[p] == ' '){
            printf("I am here\n");
            m_n[q] = str[p];
            q++;
        }
        m_n[q] = '\0';
        printf("%c",m_n[p]);
    }

      for(int q = 0; q < i; q++){
        if (str[q] == ',') m_n[q] = str[q];
        if (str[q] == '\n'){
            m_n[q] = '\0';
            break;
            }
    }
    //10-14-2021 18:30:15 this is still not working well. Fuck

    /* 10-14-2021 18:23:00 this is not working. Find other solutions
    while(str[q] != '\n') { /// if str = new line --> I collected the first two value.
       if(str[q] == ' '){
           printf("%c", str[q]);
       }
       q++;
    } 
    
the inpuuts I used: 
123 1231  
sadasd123    
    
*/
    



/* -------------------------------------------------------------------------- */
/*                   10-15-2021 08:51:02 Does not work Code                   */
/* -------------------------------------------------------------------------- */

    /* /// 10-14-2021 11:22:28 this code is not working so I found better solution; 
    10-15-2021 08:50:33 well this is just full of bugs so this is not working. 
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
 