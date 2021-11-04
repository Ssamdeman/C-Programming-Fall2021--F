/// read character from Stdin
///print them out  as string to output.
#include<stdio.h>
#include<stdlib.h>
/// Getting anything value  and priting using pointer
/* void getString(char** addres_p, int size_n) {

    int ch;
    int i = 0;
    char* p;
    p = malloc(size_n * (sizeof(char)));
   

    while((ch = getchar()) != EOF && i < size_n){
        *(p+i) = ch;
        i++;
    }
    *(p+i) = 0;
    *addres_p = p;

} */
/* int main(void){

    char* p;
    getString(&p, 1000);
    printf("String: %s\n", p);

    return 0;
} */

struct Char_Node 
{
    char value;
    struct Char_Node* nextvalue;
};

int main(void){

    struct  Char_Node* list = NULL; /// address of first node in the list
    struct  Char_Node* lastNode = NULL;/// address of last node.
    int ch;
    while((ch = getchar) != EOF){
        ///create new node to store the character
        struct Char_Node* new;
        new = malloc(sizeof(struct Char_Node));
        (*new).value = ch;
        (*new).nextvalue = NULL;
        ///ready to add this new node to list to the last. 
        if(lastNode == NULL){
            list = new;
            lastNode = new;
        }
        else{
            (*lastNode).nextvalue = new;
            lastNode = new;
        }

    }
    //print the string in the list
    struct Char_Node* p;
    p = list;
    while(p != NULL){
        printf("%c", (*p).value);
        p = (*p).nextvalue; // move p to the next addres (next node);

    }
    return 0;
}



