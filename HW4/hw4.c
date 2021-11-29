#include<stdio.h>
#include <stdlib.h>

/// build basic link chain like reading from sdtin and priting them out. 

struct NODE {
    char values; //character stored in  this node. 
    struct NODE* next; // address pointeint to the next node in the list. 
    //struct NODE* prev;
};


struct NODE* addNewNode (struct NODE *first, char ch){
    //add a new node called "new_node" to the list starting at adress "*first";
    //return updated list after adding the new node;

    struct NODE* new_node;
    new_node = malloc(sizeof(struct NODE));
    new_node->values = ch;
    new_node->next = NULL;

    //add new node in the *first.
    if(first == NULL){
        //the inpute is empty
        first = new_node;
    }
    else{
        // we are moving through every elements in the *first and saving the last elements node and "last"
        struct NODE* last;
        last = first;
        while(last->next == NULL) last = last->next;

        last->next = new_node;
        last = new_node;
    }
    return first;
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
}