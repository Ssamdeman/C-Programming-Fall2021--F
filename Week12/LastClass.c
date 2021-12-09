//  GRAPH: set of vertices and relationships between vertices
// graph of people and friendships
// for each person we want to store his/her name and age
// and list of friends

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct GRAPHNODE {
    char* name; // store the name of the node (person)
    int age;
    struct LISTNODE* neighbors;
    struct GRAPHNODE* next;
};


struct LISTNODE {
    struct LISTNODE* next;
    struct GRAPHNODE vertex;
};




struct GRAPHNODE newGraphNode(char* _name, int _age) {
    struct GRAPHNODE vertex;
    vertex.name = malloc(strlen(_name)+1);
    strcpy(vertex.name, _name);
    vertex.age = _age;
    vertex.neighbors =NULL;
    vertex.next = NULL;
    
    return vertex;
}

struct LISTNODE* addNeighbor(struct LISTNODE* neighbor_first, struct GRAPHNODE new_neighbor) {
    // new_neighbor_p as a new neighbor to the linked neighbor list
    // neighbor_first: first pointer of this neighbor list
    struct LISTNODE* new_list_node_p;
    new_list_node_p = malloc(sizeof(struct LISTNODE));
    new_list_node_p->vertex = new_neighbor;
    new_list_node_p->next = neighbor_first;
    return new_list_node_p;
}


void printVertex(struct GRAPHNODE vertex) {
    // print name and age of this vertex
    printf("name: %s, age: %d", vertex.name, vertex.age);
}
//wrong one
/* void printGraph(struct GRAPHNODE *g, int n_vertices) {
    // print  the inforamtion for every vertex in a given graph
    // g: address of the array of vertices
    // n_vertices: num of vertices in this graph
    int i;
    for (i=0; i<n_vertices;i++) {
        //g[i]: vertex i
        printf("\n");
        printVertex(g[i]);
        // print all neighbors' info
        printf("\nNeighbors: ");
        struct LISTNODE* my_neighbor = g[i].neighbors;
        while (my_neighbor != NULL) {
            printf(";");
            printVertex(my_neighbor->vertex);
            my_neighbor = my_neighbor->next;
        }
        
    }
    
} */

/* struct GRAPHNODE* addVertex(struct GRAPHNODE *first_vertex_ptr, char* _name, int _age ) {
    // adding a new vetex with _name and _age
    // to a given graph
    // first_vertex_prt is pointer to first vertex of graph
    // return pointer to first vertex of new  updated graph
    struct GRAPHNODE *new_vertex_p;
    new_vertex_p = malloc(sizeof(struct GRAPHNODE));
    new_vertex_p->name = malloc(sizeof(strlen(_name)+1));
    strcpy(new_node_p->name, _name);
    new_vertex_p->age = _age;
    new_vertex_p->next = first_vertex_ptr;
    return new_vertex_p;
} */

void addVertexToGraph(struct GRAPHNODE** address_of_my_graph, struct GRAPHNODE node_v){
    //arguments  that given the lette's adress;
    struct GRAPHNODE*  my_graph;
    my_graph = *address_of_my_graph;

    struct GRAPHNODE* new_vertex_pointer;
    new_vertex_pointer = malloc(sizeof(struct GRAPHNODE));
    *new_vertex_pointer = node_v;// there are other things can be made..

    new_vertex_pointer->next = my_graph;
    //new vertex now. 
    *address_of_my_graph = new_vertex_pointer;
}

void printGraph(struct GRAPHNODE* first_pointer_vertex){
    while(first_pointer_vertex != NULL){
        printVertex(*first_pointer_vertex);
        ///print neighboor
        struct LISTNODE* my_neighboor = first_pointer_vertex->neighbors;
        while(my_neighboor != NULL){
            printVertex(my_neighboor->vertex);
            my_neighboor = my_neighboor->next;
        }
        first_pointer_vertex = first_pointer_vertex->next;
    }
}

void addNeighboorTo(struct GRAPHNODE** vertext_p, struct GRAPHNODE* vertex_friend_p){
    struct GRAPHNODE* my_vertex = *vertext_p;
    addNeighboor(my_vertex->neighbors, *vertex_friend_p);
    *vertext_p = my_vertex;

}
int main() {
    struct GRAPHNODE *graph_first_p = NULL; // linked list of vertices
    struct GRAPHNODE vertex =  newGraphNode("John", 20);
    addVertexToGraph(&graph_first_p, vertex);
    printGraph(graph_first_p);

    /* 
    graph_first_p = (struct GRAPHNODE *) malloc (sizeof (struct GRAPHNODE));

    graph_first_p = addVertex(graph, "John", 20);
    graph_first_p = addVertex(graph, "Jane", 18);
    graph_first_p = addVertex(graph, "Joe", 21);
    graph_first_p = addVertex(graph, "Jenny", 25);
     */
    
}

// option 1:
/* int main() {
    struct GRAPHNODE graph[100];
    
    graph[0] = newGraphNode("John", 20);
    graph[1] = newGraphNode("Jane", 18);
    graph[2] = newGraphNode("Joe", 21);
    graph[3] = newGraphNode("Jenny", 25);
    
    // add neighbors to vertex 0
    graph[0].neighbors = addNeighbor(graph[0].neighbors, graph[1]);
    graph[0].neighbors = addNeighbor(graph[0].neighbors, graph[2]);
    graph[0].neighbors = addNeighbor(graph[0].neighbors, graph[3]);
    
    graph[1].neighbors = addNeighbor(graph[1].neighbors, graph[0]);
    graph[1].neighbors = addNeighbor(graph[1].neighbors, graph[2]);
    graph[1].neighbors = addNeighbor(graph[1].neighbors, graph[3]);
    
    graph[2].neighbors = addNeighbor(graph[2].neighbors, graph[0]);
    graph[2].neighbors = addNeighbor(graph[2].neighbors, graph[1]);
    
    graph[3].neighbors = addNeighbor(graph[3].neighbors, graph[0]);
    graph[3].neighbors = addNeighbor(graph[3].neighbors, graph[1]);
    
    printGraph(graph, 4);
    printf("\n");
    return 0;
}
 */