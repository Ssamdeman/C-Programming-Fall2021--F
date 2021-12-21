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
        printf("%s-", root->word);
    //else
        //printf("%s,", root->word);
    
    // print all values on the right subtree
    printTreeIncreasingOrder(root->right);
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
     while(ch != EOF){

        if(ch == ' ' || ch == '\n'){
            a_word[i] = '\0';
            add_new_node(&root, a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }
        ch = getchar();
    }
    printTreeIncreasingOrder(root);






}