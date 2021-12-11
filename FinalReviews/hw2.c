#include<stdio.h>

#define MAXVALUE 1000


int main(void){
    //get the size of the arrays in the first line. 
    int n;
    int m;
    int* p;

   //printf("Code is Working\n");
    scanf("%d %d", &n, &m);
   
    if( n < 0 || m < 0) return 0;
    //printf("%d %d", n, m);

    int array_a[n];
    int array_b[m];
    int array_c[n+m];

    char value_holder;
    int k = 0;// counter

    //reading the first line. T
   

    value_holder = getchar();
    while(value_holder != EOF){
        printf("I am HERE \n");
        if(value_holder =='\n') break;
        array_a[k] = value_holder;
        k++;
        value_holder =  getchar();
        printf("I am HERE 2 \n");
    }
    array_a[k] = '\0';
   

    //Reading the second Line. 
    k = 0;

   /*  value_holder = getchar();
    while(value_holder != EOF && value_holder != '\n'){
        array_b[k] = value_holder;
        k++;
        value_holder = getchar();
    }    */
/* 
    2 3 
    1,3
    2,4,6 */








    return 0;


}