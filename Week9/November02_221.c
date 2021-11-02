#include <stdio.h>
#include<string.h>
#include<stdlib.h>








//Goal to take input from a doc and scan for a word. and tell us how many time the word in the doc
//without any arrays;
struct CHAR_IN_A_STRING{
    char content;
    struct CHAR_IN_A_STRING *next;// Address of next object.
}

int main(){
    struct CHAR_IN_A_STRING *p_first;/// Address of first Char Object
    int ch;
    struct CHAR_IN_A_STRING *p_last; ///add of last char
    while(1){
        ch = getchar();
        if(ch == EOF) break;
        struct CHAR_IN_A_STRING *p_new;
        p_new = malloc(sizeof(struct CHAR_IN_A_STRING));
        (*p_new).content = ch;
        (*p_new).next = NULL;
        (*p_last).next = p_new;
        p_last =  p_new;
    }
}








/* -------------------------------------------------------------------------- */
/*                         Code bellow is not wokring                         */
/* -------------------------------------------------------------------------- */
/* 
//Goal to take input from a doc and scan for a word. and tell us how many time the word in the doc
#define WORDMAXLEN 1000
#define WORDSMAXNUM 2000
struct WORD{
    char* content; // pointer because  we dont the leng of a word
    int count; //num of the word appeared
};

void printWordslist(struct WORD *p_word, int n) {
    //print word info form an arrayof n element, starting ad address;
    for(int i = 0; i < n; i++){
        printf("Word: %s, count: %d", (*(p_word+i)).content, (*(p_word+i)).count);
    }
}

int main (void){
    struct WORD list[WORDSMAXNUM];
    char str[WORDMAXLEN];
    int c;
    int i = 0; //next unique word in the list
    while(1){
        if (scanf("%s", str) == EOF) break;
        // check if str is a new word
        //currently, words (list[0]......, list[n-1])
        int j;
        for(j = 0; j <= i-1; j++){
            if( strcmp (str,list[j].content) == 0)
            list[j].count++;
            break;
        }
        if (j == i){
            list[i].content = (char*) malloc(strlen(str)+1);
            strcpy(list[i].content, str);
            list[i].count = 1;
            i++;
         }
    }

    

} */

