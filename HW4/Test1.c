//Lessons from Youtube. Try it. it called "Linked lists in C for Beginners #1- Introduction"
//11-29-2021 15:04:07 I dont need this one right now cause I am not sure where I am stuck.
#include <stdio.h>
#include <stdlib.h>



struct NODE {
    int data;
    struct NODE *next;
};

//sorting and saving in the headref
void sorted (struct NODE** head_ref, struct NODE* new_node) {
    struct NODE* current;
    //Special case for the head end 
    if (*head_ref == NULL|| ((*head_ref)->data >= new_node->data)) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
        current = *head_ref;
        while ((current->next != NULL) && (current->next->data < new_node->data)) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
}


void printLinkedList(struct NODE *first){
    struct NODE* current;
    current = first;
    while(current != NULL){
        printf("%d ", current->data);
        current = current->next;
    }
}




struct NODE* AddNewNode(int input){

    struct NODE *new_node;
    new_node = (struct NODE*) malloc(sizeof(struct NODE));

    new_node->data = input;
    new_node->next = NULL;
    return new_node;
}
/* struct NODE* addNewNode (struct NODE *first, int input){

    struct NODE* new_node;
    new_node = malloc(sizeof(struct NODE));
    new_node->data = input;
    new_node->next = NULL;

    //if the *first is the empty 
    if(first == NULL){
        first = new_node;
    }else {
        struct NODE* last; /// *last will be last node for the *first
        last = first;
        while (last->next != NULL){
            last = last->next;
        }
        last->next = new_node;
        last = new_node;
    } return first;

}
 */

int main (void){
    int x;
    struct NODE *p = NULL;
    struct NODE *head = NULL;

    while((scanf("%d", &x)) != EOF) {
        p = addNewNode(x);
        sorted(&head, p);
    }
    printf("Here is the all input\n");
    printLinkedList(head);

    return 0;

}