#include<stdio.h>
#include<stdlib.h>
#include <string.h>

struct TREENODE {
    int value;
    struct TREENODE* right;
    struct TREENODE* left;
    struct TREENODE* parent;
};

struct TREENODE* addValue2Tree( struct TREENODE* list, int x){
    /// 
    struct TREENODE* root; //comparing variable 
    root = list;

    struct TREENODE* in_coming;
    in_coming


   
    

}


int main (void){

    struct TREENODE* root = NULL; // pointer to the root node of my tree. Since it is a pointer, the way i will access is using this. 
        //thinkg all the node is randomly craeted in the memory and only way to access to the beggining is this root.
    int r;
    while(1){
        scanf("%d",&r);
        if(scanf("%d",&r) == EOF) break;

        //add the value.
        root = addValue2Tree(root, r);
        }
        //print values increaseing order;
        printTree(root);




}