struct GRAPHNODE* addVertex(struct GRAPHNODE *first_vertex_ptr, char* _name, int _age ) {
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
}