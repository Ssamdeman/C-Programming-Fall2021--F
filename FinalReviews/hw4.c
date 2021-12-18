#include<stdio.h>
#include<stdlib.h>

// creat linked list next.
struct LINKED{
    int value;
    struct LINKED *next;
} ;

//My logic was right but still cannot add it infront.
struct LINKED* add_in_front(struct LINKED* linklist, int x){
    struct LINKED* new_node;
    new_node = malloc (sizeof(struct LINKED));
    new_node->value = x;
    new_node->next = NULL;

    struct LINKED *p; // pointer for original linked list
    struct LINKED * p2;

    p = linklist;

    if(linklist == NULL) {
        linklist =  new_node;
    }
    else{
        new_node->next = p;
        linklist = new_node;

    }
    return linklist;
    

/* 

        1 2 3 4 5 6 = original
        9 = adding in front
        9 1 2 3 4 5 6;



 */

}


//need attention
struct LINKED* removeLast_element(struct LINKED* linkList){
    //remove the last elemnt the return updated version.
    struct LINKED*  t; //this find the last position.  
    t = linkList;

    if(linkList == NULL){ 
        return linkList;
    } 
    else {
        //https://www.alphacodingskills.com/ds/notes/linked-list-delete-the-last-node.php 
        while(t->next != NULL){
            t = t->next;
            /// t become the last element. 
            }
        

    }

    return linkList;




}
struct LINKED* addNewNode(struct LINKED *first, int ch) {
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
        printf("%d", current->value);
        current = current->next;
        if(current == NULL) printf("\n");
    }
}
int main (void){
   printf("Starting... \n");

    struct LINKED *head = NULL;

   
    head = addNewNode(head, 1);
    head = addNewNode(head, 2);
    head = addNewNode(head, 3);
    head = addNewNode(head, 4);
    head = addNewNode(head, 5);
    

   /* 
    head = addNewNode(head, 'h');
    head = addNewNode(head, 'e');
    head = addNewNode(head, 'l');
    head = addNewNode(head, 'l');
    head = addNewNode(head, 'o'); 
 */
    print_list(head);
    add_in_front(head, 9);
    print_list(head);



}