#include<stdio.h>
#include <stdlib.h>



struct NODE {
    int character; // character stored in this node
    struct NODE *next; // address pointing to the next node in the list
    struct NODE *prev; 
};




void printList(struct NODE *first) {
    // print information of linked list starting at the first node "first"
    struct NODE *current;
    current = first;
    while(current != NULL) {
        printf("%d ", (*current).character);
        current = (*current).next;
    }
}

/* struct NODE* reverse(struct NODE *head){

        if( head == NULL) return head;

        struct NODE*  w = head;
        struct NODE*  q = w->next;

        while ( w->next != NULL ){
            
            q = w->next;
            w->prev = w->prev;
            w->prev = q;
            w = w->prev;
        }
        w->next = w->prev;
        w->prev = NULL;
        return w;
    } */

void ReversePrint(struct NODE *list) {
	struct NODE* temp = list;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	while(temp != NULL) {
		printf("%d ",temp->character);
		temp = temp->prev;
	}
	printf("\n");
} 


struct NODE* AddNewNodeSorted(struct NODE *first, int ch){
    struct NODE *ptr;
	struct NODE *temp = (struct NODE *)malloc(sizeof(struct NODE));
	temp->character = ch;
	temp->next = NULL;
    temp->prev = NULL;
	
	if(first == NULL){
		// this section runs if linked list is empty
		// we simply set head to temp
		first = temp;	
	}
	else if(temp->character <= first->character){
		temp->next = first;
		first = temp;
	}
	else{
		ptr = first;
		while(ptr->next != NULL && ptr->next->character < temp->character){
			ptr = ptr->next;
		}
		temp->next = ptr->next;
        //temp->prev = ptr;
		ptr->next = temp;
	}
	
	return first;

}


struct NODE* addNewNode(struct NODE *first, int ch) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    //this code works too but it breaks the reverse.
    /* 
 */

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
    //size of the y;
    int y, x, z;

    scanf ("%d ", &y);
    struct NODE *p = NULL; //reversiable
    struct NODE *p_two = NULL; //sorted but none reversiable. 
    struct NODE *p_three = NULL;

    for (int i = 0; i < y; i++){
        scanf("%d", &x);
        p = addNewNode(p, x);
        p_two = AddNewNodeSorted(p_two, x);
    }
    scanf ("%d", &z);

    printf("the string just read from stdin is: \n");

    p_two = AddNewNodeSorted(p_two, z);
    printList(p);
    printf("\n");
    ReversePrint(p_two);
    
    return 0;
}
//1 3 5 7 9


/// sorted thing lin
/* 
struct node* insert_sortedll(node *head, int val){
	
	struct node *ptr;
	struct node *temp = (struct node *)malloc(sizeof(struct node));
	temp->val = val;
	temp->next = NULL;
	
	if(head==NULL){
		// this section runs if linked list is empty
		// we simply set head to temp
		head = temp;	
	}
	else if(temp->val <= head->val){
		// this section runs if the new val is smaller then
		// the first value in the linked list
		// we simple insert temp at the beginning of the linked list
		temp->next = head;
		head = temp;
	}
	else{
		// we are iterating each element of the linked list
		// to find the node whose value is just smaller than val
		ptr = head;
		while(ptr->next!=NULL&&ptr->next->val<temp->val){
			ptr = ptr->next;
		}
		// ptr now points to the node whose value is just less than val
		// we simply insert temp between ptr and ptr->next
		temp->next = ptr->next;
		ptr->next = temp;
	}
	
	return head;
 */