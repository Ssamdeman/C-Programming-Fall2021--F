#include <stdio.h>
#include <stdlib.h>



struct NODE {
 
}



int main (void){
  int ch;
  struct NODE *p = NULL; // pointing to the firwst node in the list
  
  while(1) {
      ch = getchar();
      if (ch == EOF) break;
      // ch is a character
      // create a new node to store this character
      // append this new node to the existing list
      p = addNewNode(p, ch);
  }
  printf("the string just read from stdin is: \n");
  printList(p);
  
  return 0;
    
}