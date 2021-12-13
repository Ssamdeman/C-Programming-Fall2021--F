#include<stdio.h>

#define MAXVALUE 1000


int main(void){
    //get the size of the arrays in the first line. 
    int n;
    int m;
    int* p;

   //printf("Code is Working\n");
    scanf("%d %d\n", &n, &m);
   
    if( n < 0 || m < 0) return 0;
    //printf("%d %d", n, m);

    char array_a[n];// arrays must be char and not int. That is why the problem is here.
    char array_b[m];
    char array_c[n+m];

    char value_holder;
    int k = 0;// counter for Array_a;
    int j = 0; // counter for Array_b; 


    //reading the first line. ---Don
    value_holder = getchar();
    while(value_holder != EOF){
        if(value_holder == '\n') break;
        array_a[k] = value_holder;
        k++;
        value_holder = getchar();
    }
    array_a[k] = '\0';
    
    //testing the inputs if Array_A. 
    /* for(int i = 0; i < k; i++){
        printf("%c\n", array_a[i]);
    } */


    //Reading the second Line. 
    value_holder = getchar();
    while(value_holder != EOF){
        if (value_holder == '\n') break;
        array_b[j] = value_holder;
        j++;
        value_holder = getchar();
    }  
    array_b[j] = '\0';
    /* testing the inputs if Array_A. 
    for(int i = 0; i < j; i++){
        printf("%c\n", array_b[i]);
    }
 */



/* 
    2 3 
    1,3
    2,4,6 
    */








    return 0;


}