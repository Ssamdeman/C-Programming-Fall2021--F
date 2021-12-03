#include<stdio.h>
#include <stdlib.h>


struct NODE {
    int value;
    struct NODE *prev;
}; 

struct NODE* head;


struct NODE* addNewNode(struct NODE *first, int ch) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    
    struct NODE *new_node;
    new_node = malloc(sizeof(struct NODE));
    (*new_node).value = ch;
    (*new_node).prev = NULL;
    
    if (head == NULL) {
        // list is empty
        head = new_node;
    }
    else {
        struct NODE* last;
        last = head;
        while(1) {
            if ((*last).prev == NULL) break;
            last = (*last).prev;
        }
        (*last).prev = new_node;
        last = new_node;
    }
    return head;
}


struct NODE* printList(struct NODE *first) {
    struct NODE *current;
    current = first;
    while(current != NULL) {
        if(current->prev != NULL){
        printf("%d,", (*current).value);
        current = (*current).prev;
        }
        else if(current->prev == NULL ){
            printf("%d", (*current).value);
            current = (*current).prev;
        }
    }
}
/* void printList(struct NODE *first) {
    // print information of linked list starting at the first node "first"
    struct NODE *current;
    current = first;
    while(current != NULL) {
        if(current->prev != NULL){
        printf("%d,", (*current).value);
        current = (*current).prev;
        }
        else if(current->prev == NULL ){
            printf("%d", (*current).value);
            current = (*current).prev;
        }
    }
}
 */
void reverseLLPrint(struct NODE *first) {
    if (first != NULL) {
        reverseLLPrint(first->prev);
        printf("%d,", first->value);
    }
}

/*
9
1 2 3 4 5 6 5 4 3
5  
*/
int main() {
    //size of the y;
    int y, x, z;
    head = NULL;

    scanf ("%d ", &y);
    struct NODE *p = NULL; //reversiable

    for (int i = 0; i < y; i++){
        scanf("%d", &x);
        p = addNewNode(p, x);
    }
    scanf ("%d", &z);

    struct NODE* temp = head;


    for (int i = 1; i < z ; i++) {
        //printf("%d", temp->value);
        temp = temp->prev;
    }
    temp->prev = (temp->prev)->prev;

    //printList(head);
    reverseLLPrint(head);


  

    return 0;
}