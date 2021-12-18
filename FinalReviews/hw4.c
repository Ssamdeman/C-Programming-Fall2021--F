#include<stdio.h>
#include<stdlib.h>

// creat linked list next.
struct LINKED{
    char value;
    struct LINKED *next;
} ;

struct LINKED* addNewNode(struct LINKED *first, char ch) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    
    struct LINKED *new_node;
    new_node = malloc(sizeof(struct LINKED));
    (*new_node).value = ch;
    (*new_node).next = NULL;
    
    if (first == NULL) {
        // list is empty
        first = new_node;
    }
    else {
        struct LINKED* last;
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


/* struct LINKED* addNewNode(struct LINKED *first, int ch){
     printf("Starting1.. \n");

    struct LINKED* new_node;
    new_node =  malloc(sizeof(struct LINKED));

    new_node->value = ch;
    new_node->next = NULL;

    if (first == NULL){
        first = new_node;
        printf("Starting2.. \n");

    }
    else{ // this here the linking is happening.
        struct LINKED* last;
        first = last;
        while(1){
            if(last->next == NULL) break;
            //first one does not have the last one then we assinged the next one
            last = last->next;
        }
        last->next = new_node; /// the added new node will be next  in the last of the list.
        last = new_node; // last node became the new node;
    }
    return first;
} */

void print_list(struct LINKED* list){
    struct LINKED* current;
    current = list;

    while(current != NULL){
        printf("%c ", current->value);
        current = current->next;
    }
}
int main (void){
   printf("Starting... \n");

    struct LINKED *head = NULL;

    //user inpute
    int  x; 
    
    /* while(1) {
        x = getchar();
        if (x == EOF) break;
       
    } */
    /* head = addNewNode(head, 1);
    head = addNewNode(head, 2);
    head = addNewNode(head, 3);
    head = addNewNode(head, 4);
    head = addNewNode(head, 5);
 */
    head = addNewNode(head, 'h');
    head = addNewNode(head, 'e');
    head = addNewNode(head, 'l');
    head = addNewNode(head, 'l');
    head = addNewNode(head, 'o'); 

    print_list(head);

}