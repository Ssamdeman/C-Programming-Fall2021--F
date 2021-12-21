#include<stdio.h>
#include<stdlib.h>
#include <string.h>



struct TREENODE{
    char* word;
    int position; // aka parent.
    struct TREENODE* right;
    struct TREENODE* left;
};

//printing is working well.
void print_tree_Inorder(struct TREENODE* tree){
    //printf("I am here");
    if( tree == NULL){
        return;
    }else{
        print_tree_Inorder(tree->left);
        printf("%s ", tree->word);
        print_tree_Inorder(tree->right); 
        /* print_tree_Inorder(tree->left); // print all values in left subtree
        print_tree_Inorder(tree->right); // print all values in right subtree
        printf("%s ", tree->word); */
        
    }
}

/* Given a non-empty binary search
   tree, return the node
   with minimum key value found in
   that tree. Note that the
   entire tree does not need to be searched. */
struct TREENODE* minValueNode(struct TREENODE* node)
{
    struct TREENODE* current = node;
 
    /* loop down to find the leftmost leaf */
    while (current && current->left != NULL)
        current = current->left;
 
    return current;
}

//comparison is working. but not all the tree is listing. 
struct TREENODE* Insert(struct TREENODE* root, char* word){
    
    struct TREENODE* find_where_put_p;
    find_where_put_p  = root; //pointer to compare and move around the tree;

    //geeting the word in corrent type or node.
    struct TREENODE* in_coming_word;
    in_coming_word = malloc(sizeof(struct TREENODE));
    in_coming_word->word = malloc(strlen(word)+1);
    strcpy(in_coming_word->word, word);
    in_coming_word->right = NULL;
    in_coming_word->left = NULL;

    //comparing and inserting the word.
    if(root == NULL){
        root = in_coming_word;
    }else{
        //this while loop is working.
        while(1){
            //comparing the value;
            int new_word_compared = strcmp(find_where_put_p->word, in_coming_word->word);
            //Finding where to put the new value using the find_where_put_p. 
            
            if(new_word_compared > 0){
                if(find_where_put_p->left == NULL){
                    break;
                }else{
                    find_where_put_p = find_where_put_p->left;
                    /// We need to check again if the new find_where_put_p is has children.
                }
            } 
            else if (find_where_put_p < 0 ){
                // need to enter a new while since we need to check all the children of the left area.?
                if(find_where_put_p->right == NULL){
                    break;
                }else{
                    find_where_put_p = find_where_put_p->right;
                }
            }
            else{
                break;
            }   
        }

        int new_word_compared_two = strcmp(find_where_put_p->word, in_coming_word->word);

        if(new_word_compared_two < 0  ){
            find_where_put_p->right = in_coming_word;
        }
        else if (new_word_compared_two > 0){
            find_where_put_p->left = in_coming_word;
        }
    }

   // printf("I am here");
    return root;
}
struct TREENODE* delete_Node(struct TREENODE* root, char* delete_word){
   //deleting all the similar words and returning. 
   if (root == NULL) return root;

    int compared_value = strcmp(root->word, delete_word);

    if(compared_value > 0){
        root->left = delete_Node(root->left, delete_word);

    }else if( compared_value < 0){
        root->right = delete_Node(root->right, delete_word);
    
    }else{ 
        /// if the root is deleted then this:
        if(root->left == NULL){
            struct TREENODE* temp = root->right;
            free(root);
            return temp;
        }
        else if( root->right == NULL) {
            struct TREENODE* temp_two = root->left;
            free(root);
            return temp_two;
        }

        struct TREENODE* temp_three = minValueNode(root->right);
            root->word = temp_three->word;

            root->word = temp_three->word;

            root->right = delete_Node(root->right,temp_three->word);
    }
    return root;



   

    


}





//insirt and given root and word;


//delete given root and word;

//print in original ordered.
//print the three in deleted version.



int main (void){

    char a_word[69];
    int ch;
    int i = 0;
    struct TREENODE* root = NULL;
    //root = (struct TREENODE*) malloc(sizeof(struct TREENODE*));

    while(1){
        ch = getchar();
        if(ch == '\n') break;
        if(ch == ' '){
            a_word[i] = '\0';
            root = Insert(root, a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }
    }
    //Insert()

  /* 
    root = Insert(root, "hello");
    root = Insert(root, "1235");
    root = Insert(root, "world");
    root = Insert(root, "here");
    root = Insert(root, "shit");
    root = Insert(root, "show");
    root = Insert(root, "me");
    root = Insert(root, "i");
 */
    print_tree_Inorder(root);

    //getting the words that need to be deleted.

    while(1){
        ch = getchar();
        if(ch == '\n') break;
        if(ch == ' '){
            a_word[i] = '\0';
            root = delete_Node(root, a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }
    }
    delete_Node(root, "hello");
    //Binary Tree. takes in Sorted. 
        //1) first the inpute and then put in the binery tree. https://hackr.io/blog/binary-search-in-c
}

 

/*
hello world 123
world 
*/

