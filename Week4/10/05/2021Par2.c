#include<stdio.h>

void swap2(int* x, int* y){
   int  address_x = *x;
   int  address_y = *y;
   *x = address_y; 
   *y = address_x;

}

int strlen1( const char* str ) {
        /// str address of the character that represent the a string
    int len = 0;
    while( *str != '\0')
    { ///*str also means the first element of the 
        len++;
        str++;
    }
    return len;
}
int main(void){
    char s [] = "Hello World";
    printf("%d \n", strlen1(s));
    
    
    
    
    /* 10-07-2021 11:55:08 why this is not working
    char a[] = {'a', 'b', 'c'};
    char* ptr;
    ptr = a; // address of array;
    printf("what is a[1] = %c"), *(ptr 1;
    
    printf("what is a[1] = %c"), ptr[1];

    printf("what is a[1] = %c"), a[1]);
 */





    
    
  
    
    /* int x = 5;
    int y = 9;
    swap2(&x, &y);
    printf("%d %d \n", x, y);
     */
}