//11-23-2021 11:08:02 to make linked list to store  and binary tree Heap Three = Parent's values is smaller then child value.


#include<stdio.h>
#include <stdlib.h>
#include <string.h>


struct THREE_NODE{
    int value;
    int size;// size of subtree
    struct THREE_NODE *parent;
    struct THREE_NODE *left;
    struct THREE_NODE *right;
    

};

typedef struct THREE_NODE NODE;
///typedef struct THREE_NODE* NODE_Pointer;//

NODE* newNode (int val){
    NODE* p;
    p = (NODE*) malloc(sizeof(NODE));
    p->value = val;
    p->left = NULL;
    p->right = NULL;
    p->size =1;
    return p;
}

//NODE* addNode2Three(NODE* r, NODE* NEW){

NODE* addNode2Three(NODE* r, int x){
    //add a x value int ot the three node at r;
    //return root of the update root.
    NODE* NEW = newNode(x);
    if(r == NULL){
        return NEW;
        //tree empty
    }
    if(r->value == x) return r; //Noo needed to add;
    if(r->value > x){
        //new must be the new root. 
        NEW->size = r->size;
        NEW->left = r;
        NEW->parent = NEW;
        return NEW;
    }

    NODE* p; 
    p->parent = r;
    r-> left = p;
    if(r->left->size < r->right->size){
        //add x to left three
        p = addNode2Three(r->left, x);
    }
    else {
        //add x to right three
        p = addNode2Three(r->right, x);
        r ->right = p;
    }
    p->parent = r;
    return r;

}

void printThree(NODE* r){
    printf("%d", r->value);
    printThree(r->right);
    printThree(r->left);
}
int main (void){
    NODE x;
    ///NODE_Pointer p;
    NODE* root = NULL;
    int i;
    while((scanf("%d", &i)) != EOF){
        NODE* New_Node;
        New_Node = newNode(i);
        root = addNode2Three(root, New_Node);
    }

    printThree(root);


}



/* 

//Double linked List.
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
} */
