#include<stdio.h>
#include<stdlib.h>
#include <string.h>

//creating binary search tree;
//save all the numbers and print them in order and reverse order.

struct node {
    int key;
    struct node *left, *right;
};
 
struct node* newNode(int item)
{
    struct node* temp
        = (struct node*)malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}
 
void inorder(struct node* root){
    
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
    
}
 
struct node* insert(struct node* node, int key)
{
    if (node == NULL)
        return newNode(key);
 
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);
 
    return node;
}
 
// Driver Code
int main()
{
    struct node* root = NULL;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root =insert(root, 60);
    root = insert(root, 80);
 
    // print inoder traversal of the BST
    inorder(root);
 
    return 0;
}


/* -------------------------------------------------------------------------- */
/*                              //second attempt                              */
/* -------------------------------------------------------------------------- */

/* struct BINARY_SEARCH_NODE {
    int value;
    
    struct BINARY_SEARCH_NODE* right;
    struct BINARY_SEARCH_NODE* left;
    struct BINARY_SEARCH_NODE* parent;
};

struct BINARY_SEARCH_NODE* new_node(struct BINARY_SEARCH_NODE* root, int x) {

    struct BINARY_SEARCH_NODE* temp;
    temp = malloc(sizeof(struct BINARY_SEARCH_NODE));
    temp->value = x;
    temp->right = NULL;
    temp->left = NULL;

    return temp;
}

struct BINARY_SEARCH_NODE* insert(struct BINARY_SEARCH_NODE* root, int x){
    
    if(root == NULL){
        return new_node(root, x);
    }
    if(x < root->value){
        root->left = insert(root->left, x);
    }else if(x > root->value){
        root->right = insert(root->right, x);
    }
    return root;
    
}
void InOrder(struct BINARY_SEARCH_NODE* root){

    if(root == NULL){
        return;
    }
    else{

        InOrder(root->left);
        printf("%d \n", root->value);
        InOrder(root->left);

        
    }
}

 */

/* int main(void){

    struct BINARY_SEARCH_NODE* root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    InOrder(root);
    
}

 */


















































/* -------------------------------------------------------------------------- */
/*                               //first attempt                              */
/* -------------------------------------------------------------------------- */

/* 
struct BINARY_SEARCH_NODE* add_new_tree(struct BINARY_SEARCH_NODE* root, int x ){
    // helps to find where to put the incoming word;
    struct BINARY_SEARCH_NODE* correct_postion;
    correct_postion = root;

    //creat a new node
    struct BINARY_SEARCH_NODE* new_node;
    new_node = malloc(sizeof(struct BINARY_SEARCH_NODE));
    new_node->value = x;
    new_node->right = NULL;
    new_node->left = NULL;
    new_node-> parent = NULL;

    if(root == NULL){
        root = new_node;
        return root;
    }else{// root is not NULL;
        //first thing first. Find where to put the new node. 
        while(1){// this loop helps to iterate through
            //right_postion == new_node;
            if(correct_postion->value == new_node->value){
                return root;
                break;
            }else if(correct_postion->value > new_node->value){//we are checking in left areas;
                if(correct_postion->left == NULL) {
                    break;
                }else{
                    correct_postion = correct_postion->left;
                }
            }else if(correct_postion->value < new_node->value){
                if(correct_postion->right == NULL){
                    printf("I am here 1\n"); // 
                    break;
                }else{
                    correct_postion = correct_postion->right;
                }
            }else{
                break;// the end.
            }
        }
        //add new node in the three.
        if(new_node->value < correct_postion->value){
            correct_postion->left = new_node;
            //I need to link the parents of the tree for the income.
            new_node->parent = correct_postion;
        }
        else if(new_node->value > correct_postion->value){
            printf("I am here 2\n");
            correct_postion->right = new_node;
            //need to connect with the parent;
            new_node->parent = correct_postion;
        }
    }
    return root;
}

void printThreeInorder(struct BINARY_SEARCH_NODE* the_three) {

    if(the_three == NULL){
        return;
    }
    else{
        printThreeInorder(the_three->left);
        printf("%d,", the_three->value);
        printThreeInorder(the_three->left);

        
    }
    
    
}


int main(void){

    // I do not need a user input. 
    struct BINARY_SEARCH_NODE* root = NULL;

    //all the inputes;
    root = add_new_tree(root,20);
    root = add_new_tree(root,40);
    root = add_new_tree(root,60);
    // root = add_new_tree(root,8);
    // root = add_new_tree(root,2);
    // root = add_new_tree(root,1);

    printThreeInorder(root);

    return 1;


    




 */
