#include <stdio.h>

#define MAXVALUE 1000

int main(void){
    int str[MAXVALUE];
    int i = 0;
    int ret ;

    while(1){
        int x;
        ret = scanf("%d", &x);
        if(ret == EOF) break;
        str[i] = x;
        i++;

    }

}