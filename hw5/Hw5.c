#include<stdio.h>
#include<stdlib.h>
#include <string.h>



struct TREENODE{
    char* word;
    int position;
    struct TREENODE* right;
    struct TREENODE* left;
};

struct TREENODE* Insert(struct TREENODE* root, char* word){
    struct TREENODE* find_where_put_p;
    find_where_put_p  = root; //pointer to compare and move around the tree;

    //geeting the word in corrent type or node.
    struct TREENODE* in_coming_word;
    in_coming_word = (struct TREENODE*)malloc(sizeof(struct TREENODE));
    in_coming_word->word = malloc(strlen(word)+1);
    strcpy(in_coming_word->word, word);
    in_coming_word->right = NULL;
    in_coming_word->left = NULL;

    //comparing and inserting the word.
    if(find_where_put_p == NULL){
        root = in_coming_word;
    }else{
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
    return root;
}





//insirt and given root and word;


//delete given root and word;

//print in original ordered.
//print the three in deleted version.



int main (void){

    char a_word[29];
    int ch;
    int i = 0;
    struct TREENODE* root;
    root = (struct TREENODE*) malloc(sizeof(struct TREENODE*));

    while(1){
        ch = getchar();
        if(ch == '\n') break;
        if(ch == ' '){
            a_word[i] = '\0';
            Insert(root, a_word);
            i = 0;
        }else{
            a_word[i] = ch;
            i++;
        }

    }



    

    //Binary Tree. takes in Sorted. 
        //1) first the inpute and then put in the binery tree. https://hackr.io/blog/binary-search-in-c
}

 

/*
hello world 123
world 
*/

