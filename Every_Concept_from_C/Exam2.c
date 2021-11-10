#include<stdio.h>
#include<stdlib.h>

#define MAXLENGTH 1000

int main(void){
    int c;
    int k = 0;
    /* int l =0;
    int h = 0; */
    int* pt; 
   /*  char*pt2;
    char* pt3; */

    pt = (int*) malloc (MAXLENGTH * (sizeof(int)));

   /* pt2 = (char*) malloc(MAXLENGTH * (sizeof(char))); // number only
    pt3 = (char*) malloc(MAXLENGTH * (sizeof(char))); */

    c = getchar();
    while(c != EOF && k < MAXLENGTH ) {
        //if (c == '\n') break;
        *(pt + k) = c;
        k++;
        c = getchar();
    }
    
    if(k == 0){
        return 0;
    } else {

  /*   for (int i = 0; i < k; i++){
         printf("%c",*(pt+i));
         //printf("I am here\n");
    } */
        for(int i = 0; i < k; i++){
            if((*(pt+i) >= 48) && (*(pt+i) <= 57)) {
                printf("%c",*(pt+i));
                //printf("I am here\n");
                /* *(pt2 + l) = *(pt+i);
                l++;  */
            }
        }
        for(int i = 0; i < k; i++){
            if(((*(pt+i) >= 65) && (*(pt+i) <= 90)) || ((*(pt+i) >= 97) && (*(pt+i) <= 122))){
                printf("%c", *(pt+i));
        /*             *(pt3 + h) = *(pt+i);
                h++;  */
            }
        }
    }
    free(pt);
    return 0;    
}
