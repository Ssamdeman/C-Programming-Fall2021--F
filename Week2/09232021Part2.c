#include<stdio.h>
#define MAXLENGTH 1000
//this funtion "called by value"
void swap(int x, int y){
    int temp;
    temp = x;
    x = y;
    y = temp;
}
//argument are the address of the value.
    //the star (*) means address of the character.
void swap2(int* x, int* y){
   int  address_x = *x;
   int  address_y = *y;
   *x = address_y; 
   *y = address_x;

}

int main(){
    int a = 6;
    int b = 10;
    // I will see a = 6 and b =10;
    printf("before: a = %d, b = %d \n", a,b);

    // do swapping where a = 10 and b = 6;
    swap2(&a, &b);

    printf("address of a = %ld and b = %ld \n", (long)&a, (long)&b);

    printf("after: a = %d and, b = %d \n", a , b);
    
}



/* ---------------------getlineFunction------------------------------------------ */
/* int getLine (char str[], int maxCharacter){ 
     int eachCharacter;
    int i = 0; //numbers of the array

    while(1){   

        eachCharacter = getchar();
        if (eachCharacter != EOF && eachCharacter == '\n') {
           str[i] = eachCharacter;
           i++;
        }
        else {
            str[i]= '\0';
            break;
            }

    }
    return i;
}               */
/* -------------------------------------------------------------------------- */
   
