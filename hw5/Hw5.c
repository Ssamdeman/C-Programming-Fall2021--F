#include<stdio.h>
#include<stdlib.h>
#include <string.h>

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
 
struct TREENODE {
    char* word;
    struct TREENODE* left; 
    struct TREENODE* right; 
    struct TREENODE* parent; 
};
typedef struct TREENODE NODE;
struct LINKED {
    char* word;
    struct LINKED* next;
    
};
struct LINKED* addNewNode(struct LINKED *first, char* word) {
    // add a new node "new" to the list starting at address "first"
    // return the updated list
    
    struct LINKED *new_node;
    new_node = malloc(sizeof(struct LINKED));
    new_node->word = malloc(strlen(word)+1);
    strcpy(new_node->word, word);
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

void print_list(struct LINKED* list){
    struct LINKED* current;
    current = list;

    while(current != NULL){
        printf("%s ", current->word);
        current = current->next;
        if(current == NULL) printf("\n");
    }
}

struct LINKED* reMove(struct LINKED *first, char* word){
    // lengthlist - 
    struct LINKED *p;
    struct LINKED *q;
    p = first; // pointer to the node that we want to delete
    q = first; // pointer to the previous node of the p
    //printf("I am here %d \n", position);
    
    while(p != NULL){
        int compared_value = strcmp(p->word, word); 
        if(compared_value == 0 ){
            break;
        }
        q = p;
        p = p->next;
    }
    printf("Word: %s ", word);
   
    if(p != NULL){
        printf("p->Word: %s ", p->word);
        if(q != NULL){
            q->next = p->next;

        }else{
            first = first->next;
        }
        //delete the p;
        free(p);
        p = NULL;
    }

    return first;
}



void printTreeIncreasingOrder(NODE* root) {
    if (root == NULL) return;
    
    printTreeIncreasingOrder(root->left);
    printf("%s ", root->word);
    printTreeIncreasingOrder(root->right);
}

/* NODE* getLeftMostNode(NODE *root) {
    // return the pointer to the left most node
    if (root == NULL) return NULL;
    NODE *p = root;
    while (p->left != NULL)
        p = p->left;
    return p;
} */

NODE* FindMin(NODE* root)
{
    if (root == NULL) return NULL;
	while(root->left != NULL) root = root->left;
	return root;
}

NODE* Delete(NODE *root, char* data) {
	
    if(root == NULL) return root; 

    int compared_value = strcmp(root->word, data); 

	if(compared_value > 0) root->left = Delete(root->left,data);

	else if (compared_value < 0) 
        root->right = Delete(root->right,data);
	else {

		// Case 1:  No child
		if(root->left == NULL && root->right == NULL) { 
			free(root);
			root = NULL;
		}
		//Case 2: One child 
		else if(root->left == NULL) {
			NODE *temp = root;
			root = root->right;
			free(temp);
		}
		else if(root->right == NULL) {
			NODE *temp = root;
			root = root->left;
			free (temp);
		}
		// case 3: 2 children
		else { 
			NODE *temp = FindMin(root->right);
            strcpy(root->word, temp->word);
			root->right = Delete(root->right, temp->word);
		}
	}
	return root;
}



void add_new_node(NODE** address_root, char*  word){

    if(address_root == NULL) return;
    NODE* root = *address_root;

    //created a new node.
    NODE* new_p = malloc(sizeof(NODE));
    new_p->word = malloc(strlen(word)+1);
    strcpy(new_p->word, word);
    new_p->left = NULL;
    new_p->right = NULL;
    new_p->parent=NULL;

    if (root == NULL) {
        *address_root = new_p;
        return;
    }
    int compared = strcmp(root->word, new_p->word);
    if(compared < 0 ){
        add_new_node(&(root->right), word);
        root->right->parent = root;/// do

    }else if (compared > 0 ){
        add_new_node(&(root->left), word);
        root->left->parent = root;

    }

}



int main(void){

    char a_word[10000];
    int ch;
    int i = 0;
    struct TREENODE* root = NULL;//original
    struct TREENODE* modified = NULL;
    struct LINKED* head = NULL;

    ch = getchar();
     while(ch != EOF ){
        //if( ch == ' ')
        if(ch == ' ' || ch =='\n'){
            a_word[i] = '\0';
            add_new_node(&root, a_word);
            head = addNewNode(head, a_word);
            //printf("%s-", a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }
        if(ch =='\n') break;

        ch = getchar();
    }
    //printTreeIncreasingOrder(root);

    //getting the second line.
    ch = getchar();
     while(ch != EOF ){
        //if( ch == ' ')
        if(ch == ' ' || ch =='\n'){
            a_word[i] = '\0';
            //add_new_node(&modified, a_word);
            //add_new_node(&root, a_word);
            head = reMove(head, a_word);
            //printf("%s-", a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }
        if(ch =='\n') break;

        ch = getchar();
    }



    if(root == NULL){
        return 0;
    }else{
        printTreeIncreasingOrder(root);
        printf("\n");
        print_list(head);
    }

    return 0;

}