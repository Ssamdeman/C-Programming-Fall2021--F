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


void printTreeIncreasingOrder(NODE* root) {
    if (root == NULL) return;
    
    // print all the values on left subtree
    printTreeIncreasingOrder(root->left);
    // print the root
   // if (isRightMostNode(root) == 1)
    printf("%s ", root->word);
    //else
        //printf("%s,", root->word);
    // print all values on the right subtree
    printTreeIncreasingOrder(root->right);
}

NODE* getLeftMostNode(NODE *root) {
    // return the pointer to the left most node
    if (root == NULL) return NULL;
    NODE *p = root;
    while (p->left != NULL)
        p = p->left;
    return p;
}

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
        root->right->parent = root;

    }else if (compared > 0 ){
        add_new_node(&(root->left), word);
        root->left->parent = root;

    }

}


int main(void){

    char a_word[10000];
    int ch;
    int i = 0;
    struct TREENODE* root = NULL;

    ch = getchar();
     while(1){
        //if( ch == ' ')
        if(ch == ' '|| ch == '\n' || ch == EOF){
            a_word[i] = '\0';
            add_new_node(&root, a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }
        if(ch == EOF) break;
        ch = getchar();
    }
    //original.
    NODE* temporal;
    temporal = getLeftMostNode(root);
    //printf("Strarting the Code... \n");
    printf("Original\n");
    printTreeIncreasingOrder(root);
    if(temporal != NULL) {
        root = Delete(root, temporal->word);
        // printf("\nfirst modified \n");
        //printTreeIncreasingOrder(root);
    }
    temporal = getLeftMostNode(root);
    if(temporal != NULL) root = Delete(root, temporal->word);

    temporal = getLeftMostNode(root);
    if(temporal == NULL) {
        return 0;
    }else{
        printf("\n");
        printf("%s", temporal->word);
        printf("\n");

    }
    
   
    





//line 1
//line whatever here



}