#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct TREENODE {
    int value;
    struct TREENODE* right;
    struct TREENODE* left;
    struct TREENODE* parent;
};

void printTree(struct TREENODE* tree){
    if(tree = NULL) return;
    //print all the leftside. since there are smaller
    printTree(tree->left);
    printf("%d, ", tree->left);
    //print all the rightside since there are bigger.
    printTree(tree->right);
   
}

void addValue2Tree( struct TREENODE** list, int x){
    /// 
    struct TREENODE* root; //comparing variable 
    if(list == NULL) return;
    root = *list;

    struct TREENODE* in_coming;
    in_coming = malloc(sizeof(struct TREENODE*));

    in_coming->value = x;
    in_coming->left = NULL;
    in_coming->right = NULL;
    in_coming->parent = NULL;

    if(root == NULL){
        *list = in_coming;
        return;
    }
    if( x >= root->value){
        addValue2Tree(&(root->right), x);
        root->right->parent = root; /// make sure the consista of parent information. m
    }
    else{
        addValue2Tree(&(root->left), x);
        root->left->parent = root;
    }

}


int main (void){

    struct TREENODE* root = NULL; // pointer to the root node of my tree. Since it is a pointer, the way i will access is using this. 
        //thinkg all the node is randomly craeted in the memory and only way to access to the beggining is this root.
    int r;

    while(1){
        if(scanf("%d",&r) == EOF) break;
        //add the value.
        addValue2Tree(&root, r);
        //print values increaseing order;  
    }

   /*  addValue2Tree(&root, 10);
    addValue2Tree(&root, 2);
    addValue2Tree(&root, 2);
    addValue2Tree(&root, 1);
    addValue2Tree(&root, 7);
    addValue2Tree(&root, 2);
    printTree(root); */
    return 0;
}