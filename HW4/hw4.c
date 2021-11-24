#include<stdio.h>
#include <stdlib.h>
/// build basic link chain. 
struct NODE {
    int values;
    struct NODE* next;
    //struct NODE* prev;
};

struct NODE* AddNewNode(struct NODE* first, int input){
    
    struct NODE *new_node;
    new_node = malloc(sizeof(struct NODE));\
    new_node->values = input;
    new_node->next = NULL;

    if (first == NULL){ 
        first = new_node;
    }else{
        struct NODE* last;
        last = first;
        while (last->next != NULL){
            last = last->next;
        }
        last->next = new_node;
        last = new_node;
    }
    return first;

}





int main (void){
    int  i; // for getting input from scan if;

    struct NODE *unsorted = NULL; // NODE pointer that saves the the inpute and give as sorted;

    while((scanf("%d", &i)) != EOF){
        unsorted = AddNewNode(unsorted, i);
    } 


    
}