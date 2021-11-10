#include<stdio.h>

/* void exhcangeValue(int* a, int* b){
    int tempValue;
    tempValue = *a;
    *a = *b;
    *b = tempValue;
    
} */

int main (void){

    //Goal is to get specific String
    int c;
    c = getchar();
    char Array[1000];
    char Array2[1000];
    int k = 0;
    int countWords  = 0;


    while( c != EOF){
        Array[k] = c; 
        k++;
        c = getchar();
    }

    if (k == 0) return 0;
    Array[k] = '\0';


    for(int i = 0; i < k; i++){
        if (Array[i] != ' '){
            Array2[i] = Array[i];
            countWords++;
        }
    }
    for(int i = 0; i < k; i++){
       if (Array2[i] != ' ') {
           printf ("%c",Array2[i]);
       }else{printf (" ");}

    }
    return 0;
    
    
    

































































































    /* -------------------------------------------------------------------------- */
    /*11-10-2021 10:40:28 Goal is to use the getcahr fucntion and prrint out all the s in a given text                                    */
    /* -------------------------------------------------------------------------- 
    ///.
   
    int c;
    c = getchar();
    char Array[1000];
    int k = 0;


    while( c != EOF){
        if (c == 's' || c == 'S'){ Array[k] = c; k++;}
        c = getchar();
    }
    if (k == 0) return 0;
    Array[k] = '\0';


    for(int i = 0; i < k; i++){
        printf("%c", Array[i]);
    }
    return 0;
    */




    /* -------------------------------------------------------------------------- */
    /*                                Exhange Value                               */
    /* -------------------------------------------------------------------------- */
   /*  
   char c;

    int x = 10;
    int y = 15;
    //we want to change the x and y values respctivally 
    printf("Before: %d %d\n", x,y);
    exhcangeValue(&x, &y);
    printf("After %d %d\n", x, y ); */

}