#include <stdio.h>

//work on this later.
int returning_A_Integer( int variable_1){
   //variable_1 = 5;
   if (1 <= variable_1 && variable_1 >= 10){
      printf("Variable is not range of 1-10 \n");
   } else 
      return 0;
   return variable_1;
}
int main(void) {

   // printf() displays the string inside quotation
   int holder =  returning_A_Integer(5);
   printf("it is in the range %d \n", holder);

   return 0;
}
