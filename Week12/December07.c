#include<stdio.h>
#include<stdlib.h>
#include <string.h>



struct LISTNODE{
    VERTEX_PTR node;
    struct LISTNODE* next;

};

struct GRAPHNODE{
    char* name;
    int value;
    struct LISTNODE *neighbors;

};

typedef struct GRAPHNODE* VERTEX_PTR; // renaming the struct graphnnode.



VERTEX_PTR newVertex(*char str, int num){

    VERTEX_PTR v;
    v = (VERTEX_PTR) malloc(sizeof(struct GRAPHNODE));
    v->name = malloc(strlen(str) + 1);
    strcpy(v->name, str);
    v->value = num;
    v->neighbors = NULL;
    return v;

}

struct LISTNODE* AddNeighbor(struct LISTNODE* neighbor_first, VERTEX_PTR w){
    // add w as a neigboor to the neighbor first
    //return new neighboor list
    struct LISTNODE* new_Node;
    new_Node = malloc(sizeof(struct LISTNODE));
    new_Node->node = w;
    new_Node->next = neighbor_first;
    return new_Node;
}
void printGraph(VERTEX_PTR* graphs, int n_vertices){
    for(int i = 0 ; i < n_vertices; i++){

        printf("name %s , value: %d", graphs[i]->name, graphs[i]->value);

        struct LISTNODE* neighbor_p = graphs[i]->neighbors;
        while (neighbor_p != NULL{
            printf("\n neighboor name: %s, neighbor value: %d",
            neighbor_p->node->name, neighbor_p->node->value);
            neighbor_p = neighbor_p->next;
            
        }

    }
}
int main (void){
    // store the list of the verticeses(GRAPHNODE);
   // struct GRAPHNODE* graph[1000]; // this one way to way to do.
    int num_verticesc = 4;
    //scanf ("%d, &num_vertices");
    /* //inputs

    4 // number vericeses  10 is the value and 2 3 are the 
    0 10 John 2 3
    1 5 Jane 1
    2 7 Mark 1 4
    3 12 JOe 2
 */

    VERTEX_PTR *graph;// graph is a pointer
    graph = (VERTEX_PTR) malloc(num_vertices * sizeof(VERTEX_PTR));

    // gett the input without neigher.
    graph[0] = newVertex("John", 10);
    graph[1] = newVertex("Jane", 5);
    graph[2] = newVertex("Mark", 7);
    graph[3] = newVertex("Joe", 12);

    graph[0]->neighbors = AddNeighbor(graph[0]->neighbors, graph[1]);
    graph[0]->neighbors = AddNeighbor(graph[0]->neighbors, graph[2]);

    graph[1]->neighbors = AddNeighbor(graph[1]->neighbors, graph[0]);

    graph[2]->neighbors = AddNeighbor(graph[2]->neighbors, graph[0]);
    graph[2]->neighbors = AddNeighbor(graph[2]->neighbors, graph[3]);


    graph[3]->neighbors = AddNeighbor(graph[3]->neighbors, graph[2]);
    
    
    
    
    //printf("hello World\n");
    // get the inputs 


}