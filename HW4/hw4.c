#include<stdio.h>
#include <stdlib.h>


struct NODE {
    char character;
    struct NODE *next;
    struct NODE *prev;
};

void printlistlink (struct NODE * first){
    
    struct NODE *current;
    current = first;

    while(current != NULL){
        printf("%c", current->character);
        current = current->next;
        }    
    }

struct NODE* AddNewNode(struct NODE *first, char ch){
    struct NODE* new_node;
    new_node = malloc(sizeof(struct NODE));
    new_node->character = ch;
    new_node->next = NULL;
    new_node->prev = NULL;

    // check of First empty;
    if(first == NULL) {
        first = new_node;
    }//else fin the last node in the *first where *first = last;
     else{
         struct NODE* last;
         last = first;
         while(1){
             if( last->next == NULL)break;
             last = last->next;
         }
         last->next = new_node; /// we getting address of last.next into the newnode.
         new_node->prev = last; // address into the 
         last = new_node; 
    }
    return first; 
}

//make double linked list.
int main (void){
    int ch;

    struct NODE *p = NULL;

    while(1){
        ch = getchar();
        if(ch == EOF) break;
        p = AddNewNode(p, ch);
    }
    printf("Here are the inputes\n");
    printlistlink (p);

} 

/* int main (void){
    int x;
    struct NODE *linkedList = NULL;

    while((scanf("%d", &x)) != EOF){
        linkedList = AddNewNode(linkedList, x);
    }
    ordered(linkedList);
    reverseOrdered(linkedList)
} */



/// sorted thing lin
/* void sortedInsert(struct Node** head_ref,
                  struct Node* new_node)
{
    struct Node* current;
    Special case for the head end 
    if (*head_ref == NULL
        || (*head_ref)->data
               >= new_node->data) {
        new_node->next = *head_ref;
        *head_ref = new_node;
    }
    else {
         Locate the node before 
the point of insertion 
        current = *head_ref;
        while (current->next != NULL
               && current->next->data < new_node->data) {
            current = current->next;
        }
        new_node->next = current->next;
        current->next = new_node;
    }
} */