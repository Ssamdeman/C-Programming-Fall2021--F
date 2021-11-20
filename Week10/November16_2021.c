// read characters from stdin and store them as a string
// print this string to stdout
// requirement: cannot use any array

#include <stdio.h>
#include <stdlib.h>
// use a linked list: list of nodes each storing the address of the next node
struct NODE {
    char character; // character stored in this node
    struct NODE *next; // address pointing to the next node in the list
    struct NODE *prev; // adress of previous node in the lsit
};

void remove_Node( struct NODE *first, int pos ){
    struct NODE *p;
    struct NODE *prev_node, *next_node;
    p = first;
    for (int i = 0; i < pos; i++){
        p = p->next;
        if( p == NULL) return;
    }
    prev_node = p->prev;
    next_node = p->next;

    if(prev_node == NULL){
        first = next_node;
        if(next_node == NULL) { first = NULL;}
        else{
            next_node->prev = NULL;
            first = next_node;

        }
        
    }else {
        prev_node->next = next_node;
        if(next_node == NULL){
            //p is the last node.
        }
        else {
            next_node->prev = prev_node;


        }

    }

    free(p);
    
}

void printList(struct NODE *first) {
    // print information of linked list starting at the first node "first"
    struct NODE *current;
   // (*current).character  same as current->character

    current = first;
    while(current != NULL) {
        printf("%c", current->character);
        current = current->next;



    
    }
}


struct NODE* addNewNode(struct NODE *first, char ch) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    
    struct NODE *new_node;
    new_node = malloc(sizeof(struct NODE));
    new_node->character = ch;
    new_node->next = NULL;
    new_node->prev = NULL;
    
    if (first == NULL) {
        // list is empty
        first = new_node;
    }
    else {
        struct NODE* last;
        last = first;
        while(1) {
            if (last->next == NULL) break;
            last = last->next;
        }
        last->next = new_node;
        new_node->prev = last;
        last = new_node;
    }
    return first;
}

int main() {
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
