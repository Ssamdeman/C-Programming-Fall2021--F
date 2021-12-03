#include<stdio.h>
#include <stdlib.h>



struct NODE {
    int character; // character stored in this node
    struct NODE *next; // address pointing to the next node in the list
    struct NODE *prev; //address of prev nodes.
};




void printList(struct NODE *first) {
    // print information of linked list starting at the first node "first"
    struct NODE *current;
    struct NODE *currentPrev;
    current = first;
    currentPrev = NULL;
    while(current != NULL) {
        printf("%d ", current->character);
        currentPrev = current;
        current = current->next;
    }
    printf("\n");
    current = currentPrev; 
    while(current != NULL){
        printf("%d ", current->character);
        current = current->prev;

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

/* void ReversePrint(struct NODE *p1) {
    if (p1 == NULL) return;
    struct NODE* last;
    last = p1;
    
    while ((*last).next != NULL) {
        last = (*last).next;
    }
    // last: last mode in list
    // print all nodes form last backward
    
    struct NODE* ptr = last;
    while (ptr!=NULL) {
        printf("%d ", (*ptr).character);
        ptr = (*ptr).prev;
    }
    

 */

	/* struct NODE* temp = list;
	if(temp == NULL) return; // empty list, exit
	// Going to last Node
	while(temp->next != NULL) {
		temp = temp->next;
	}
	while(temp != NULL) {
		printf("%d ",temp->character);
		temp = temp->prev;
	}
	printf("\n"); */


/* struct NODE* AddNewNodeSorted(struct NODE *first, int ch){
    
	struct NODE *temp = (struct NODE *)malloc(sizeof(struct NODE));
	temp->character = ch;
	temp->next = NULL;
    temp->prev = NULL;
	
	if(first == NULL){
		// this section runs if linked list is empty
		first = temp;	
	}

    //check if if the it's value equal to it self.
	else if(temp->character <= first->character){
		temp->next = first;
        first->prev= first; // if first and temp is 1 then assing first one to temp 1.
		first = temp;
        //I dont know what to do with previus value in case of fist has 1 and 1. I made that in that case, I just
        first->prev = NULL; //this one does not make sense so. later
	}
	else{
	    struct NODE *ptr = first;
		while(ptr->next != NULL && ptr->next->character < temp->character){
			ptr = ptr->next;
		}
		temp->next = ptr->next;
        temp->prev = ptr;
		ptr->next = temp;
	}
	return first;

} */


struct NODE* addNewNode(struct NODE *first, int ch) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    

    //this code works too but it breaks the reverse.


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
        //last = new_node;
    }
    return first;
}


int main() {
    //size of the y;
    int y, x, z;

    scanf ("%d ", &y);
    struct NODE *p = NULL; //reversiable
    //struct NODE *p_two = NULL; //sorted but none reversiable. 
    //struct NODE *p_three = NULL;

    for (int i = 0; i < y; i++){
        scanf("%d", &x);
        //p = addNewNode(p, x);
        //p_two = AddNewNodeSorted(p_two, x);
        p = addNewNode(p, x);
    }
    scanf ("%d", &z);
    p = addNewNode(p, z);

    printf("Priting linked List BEFORE reverse it.\n");
    printList(p);
    
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

/* 12-02-2021 12:15:12 All the inpute 
Input1
5 
1 3 5 7 9 
2
Output1
1 2 3 5 7 9 
9 7 5 3 2 1


Input2
5
1 3 5 7 9 
10
Output2
1 3 5 7 9 10
10 9 7 5 3 1
Input3
5 
1 3 5 7 9      
0
Output3
0 1 3 5 7 9
9 7 5 3 1 0
Input4
0
10
Output4
10
10
Input5
1
10
10 
Output5: 
10 10 
10 10





*/