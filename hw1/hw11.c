#include<stdio.h>
#define MAXLEN 1000

int main(){

    int text;
    int i = 0; 
    char array[MAXLEN];

char uppercase(char str) {
    if (str >= 'a' && str <= 'z') str = str - 32;

    return str;
}

    text = getchar(); // to store the character read from stin
    if (text == EOF){ 
        array[i] = '\0';
    }
    else{
        while (text != EOF){
            array[i] = text;
            i++;
            text = getchar();
        }
    }
    
    array[i] = '\0';

    if (array[i - 1] >= 'a' && array[i - 1] <= 'z'){

        array[i - 1] = uppercase(array[i - 1]);
    }
    printf("%s", array);


    return 0;
}