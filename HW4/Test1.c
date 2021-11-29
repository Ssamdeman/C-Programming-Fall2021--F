//Lessons from Youtube. Try it. it called "Linked lists in C for Beginners #1- Introduction"
//11-29-2021 15:04:07 I dont need this one right now cause I am not sure where I am stuck.
#include <stdio.h>
#include <stdlib.h>

// use a linked list: list of nodes each storing the address of the next node
struct NODE {
    char character; // character stored in this node
    struct NODE *next; // address pointing to the next node in the list
};

void printList(struct NODE *first) {
    // print information of linked list starting at the first node "first"
    struct NODE *current;
    current = first;
    while(current != NULL) {
        printf("%c", (*current).character);
        current = (*current).next;
    }
}

struct NODE* addNewNode(struct NODE *first, char ch) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    
    struct NODE *new_node;
    new_node = malloc(sizeof(struct NODE));
    (*new_node).character = ch;
    (*new_node).next = NULL;
    
    if (first == NULL) {
        // list is empty
        first = new_node;
    }
    else {
        struct NODE* last;
        last = first;
        while(1) {
            if ((*last).next == NULL) break;
            last = (*last).next;
        }
        (*last).next = new_node;
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