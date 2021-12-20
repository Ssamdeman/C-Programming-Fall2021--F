#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct TREENODE {
    int value;
    struct TREENODE* right;
    struct TREENODE* left;
    struct TREENODE* parent;
};


typedef struct TREENODE NODE;

// this fuction has some issues. I could not identified so yeah. 
 void printTree_InOrder(NODE* r) {
    // print all the values on the tree rooted at node "r"
    // print in the in-order order: print left  first, followed by root, followed by right values
    
    if (r==NULL) {
        // tree is empty
        return;
    }
    else {
        printTree_InOrder(r->right); // print all values in left subtree

        printf("%d ", r->value);

        printTree_InOrder(r->left); // print all values in right subtree
    }
}
/*
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
 */

// this code not priting in order;
NODE* addNode2Tree(NODE* r, int x) {
    // r: root pointer of the tree
    // x: value to add into this tree
    // return the root of the updated tree
    NODE* p;
    p = malloc(sizeof(NODE));
    p->value = x; // same thing as (*p).value = x
    p->parent = NULL;
    p->left = NULL;
    p->right = NULL;
    
    if (r == NULL) {
        //tree is empty
        // tree will consist of node p only
        return p;
    }
    // else: tree is not empty
    if (r->value > x) {
        p->left = r; // r is left child of node p
        r->parent = p; // p is parent of r
        return p;
    }
    if (r->left == NULL) {
        // left subtree does not exist
        // make p new left child of root r
        r->left = p;
        return r;
    }
    if (r->right == NULL) {
        r->right = p;
        return r;
    }
    // left subtree exists
    // right subtree exists
    if (r->left->value <= x) {
        // add x to the left subtree
        NODE* new_subtree = addNode2Tree(r->left, x);
        new_subtree->parent = r;
        r->left = new_subtree;
        return r;
    }
    if (r->right->value <= x) {
        NODE* new_subtree = addNode2Tree(r->right, x);
        new_subtree->parent = r;
        r->right = new_subtree;
        return r;
    }
    // x is smaller than both left and right
    p->left = r->right;
    r->right->parent = p;
    r->right = p;
    p->parent = r;
    return r;
}


int main (void){

    struct TREENODE* root = NULL; // pointer to the root node of my tree. Since it is a pointer, the way i will access is using this. 
        //thinkg all the node is randomly craeted in the memory and only way to access to the beggining is this root.
    int r;

    while(1){
        if(scanf("%d",&r) == EOF) break;
        //add the value.
        root = addNode2Tree(root, r);
        //print values increaseing order;  
    }
   /*  root = addNode2Tree(root, 5);
    root = addNode2Tree(root, 3);
    root = addNode2Tree(root, 10);
    root = addNode2Tree(root, 1);
    root = addNode2Tree(root, 7);
    root = addNode2Tree(root, 2); */
    printTree_InOrder(root); 

    /* addValue2Tree(&root, 10);
    addValue2Tree(&root, 2);
    addValue2Tree(&root, 2);
    addValue2Tree(&root, 1);
    addValue2Tree(&root, 7);
    addValue2Tree(&root, 2); */
   // printTree_InOrder(root);
    return 0;
}