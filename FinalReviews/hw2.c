#include<stdio.h>
#include<stdlib.h>

#define MAXVALUE 1000

void sorted(int array[], int size){
    int i,j, temp;

    for(i = 0; i < size; i++){
        for( j = i+1; j < size;j++){
            if( array[i] > array[j]){
                temp = array[i];
                array[i] = array[j];
                array[j] = temp;
            }
        }
    }
}

int main(void){
    //get the size of the arrays in the first line. 
    int n;
    int m;
    int* p;//

   //printf("Code is Working\n");
    scanf("%d %d\n", &n, &m);
   
    if( n < 0 || m < 0) return 0;
    //printf("%d %d", n, m);

    int array_a[n];
    int array_b[m];
    int array_c[n+m];

    int tempholder;
    int k = 0;// counter for Array_a;
    int j = 0; // counter for Array_b; 

   /*  printf("here is the inputes of the array_b\n");
    for(int i = 0; i < k; i++){
        printf("%d,", array_b[i]);
    } */

    //goal is to read user in inpute using the scanif an save in arrats;
    while(1){
        if(n == 0) break;
        scanf("%d,", p);
        array_a[k] = *p;
        k++;
        if( k >= n) break;
    }

 /*   //testing the array_a; -- 12-17-2021 12:28:18 working well.
     printf("here is the inputes of the array_a\n");
    for(int i = 0; i < k; i++){
        printf("%d,\n", array_a[i]);
    } */

    while(1){
        if(m == 0) break;
        scanf("%d,", p);
        array_b[j] = *p;
        j++;
        if( j >= m) break;

    } 
  /*  //testing the array_a; -- 12-17-2021 12:28:18 working well.
    printf("here is the inputes of the array_b\n");
    for(int i = 0; i < j; i++){
        printf("%d,", array_b[i]);
    }
     */
    //sort the array_a  and array_b; ---12-17-2021 13:12:32 WAE.
    sorted(array_a, k);
    sorted(array_b, j);
   /*  // inputs are working as expeted.
     printf("here is the sorted of the array_a\n");
    for(int i = 0; i < k; i++){
        printf("%d ", array_a[i]);
    }
    printf("\nhere is the sorted of the array_b\n");
    for(int i = 0; i < j; i++){
        printf("%d ", array_b[i]);
    }
 */
    // merget two arrays intop one;
    for(int i = 0; i < k;i++){
        array_c[i] = array_a[i]; 
    }
    tempholder = k; // is value to conute the array_c;

    for(int i = 0; i < j; i++){
        array_c[tempholder] = array_b[i]; 
        tempholder++;
    }
    //priting c;
    for(int i = 0; i < tempholder; i++){
        printf("%d,", array_c[i]);
    }







/* 
    2 3 
    1,3
    2,4,6 
    */






















































/* 


12-17-2021 10:28:38 wrong method to use. 
    //reading the first line. ---Don
    value_holder = getchar();
    while(value_holder != EOF){
        if(value_holder == '\n') break;
        array_a[k] = value_holder;
        k++;
        //if (k > n) break;
        value_holder = getchar();
        

    }
    array_a[k] = '\0';
    printf("here is the input of ARRAy A\n");
    //testing the inputs if Array_A. 
    for(int i = 0; i < k; i++){
        printf("%c\n", array_a[i]);
    }


    //Reading the second Line. 
    value_holder = getchar();
    while(value_holder != EOF){
        if (value_holder == '\n') break;
        array_b[j] = value_holder;
        j++;
        //if (j > m) break;
        value_holder = getchar();

    }
    array_b[j] = '\0';
    //testing the inputs if Array_A. 
    printf("here is the input of Array B\n");
    for(int i = 0; i < j; i++){
        printf("%c\n", array_b[i]);
    }

    printf("here is the out of Array C\n");
    //p is a pointer. Use it.
    for(int i = 0; i < k;i++){
        p = array_c;
        p[i] = array_a[i];
        printf("%c", *(p+i));
    }
     */













    return 0;


}