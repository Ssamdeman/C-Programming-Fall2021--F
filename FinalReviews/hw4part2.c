#include<stdio.h>
#include<stdlib.h>


struct sPERSON{
    int age;
    struct sPERSON *next_in_line;
};

//creting new person of node

struct sPERSON *getNewPerson(int age){
    
    //this fuction called, we create a one and allocated memory.
    struct sPERSON *newPerson = NULL;
    newPerson = (struct sPERSON*) malloc(sizeof(struct sPERSON));
    newPerson->next_in_line = NULL;
    newPerson->age = age;
    printf("created a new person at %p,\n", newPerson);
    return newPerson;

}

void print_person(struct sPERSON *person, char *comment){
    if(person == NULL){
        
        printf("%s is NULL \n", comment);
    }
    else{
        printf("%s: age = %d: address: %p, next_In_Line %p \n", comment, person->age, person, person->next_in_line);
    }
}

void print_list( struct sPERSON *list){
    //list is the first element of the list. 
    // t helps tp keep track
    printf("Priting List : \n");
    struct sPERSON *t; 
    t = list; 

    if(t == NULL){
        printf("the List Is Empty\n");
    }
    else{
        while(t){
            print_person(t, "t");
            t = t->next_in_line;

        }

    }



}

int main (void){

    struct sPERSON *first = NULL;
    struct sPERSON *added = NULL;

    print_person(first, "first");
    print_person(added, "second");


    //inputes
    char command[64];
    int age;
 while(1)
    {
        printf( "Enter a command or value : ");
		fgets(command, 64, stdin);
		if (strcmp("q\n", command) == 0) 
		{
			printf("Quitting..\n");
			break;
		}
		else if (strcmp("print\n", command) == 0) 
        {
            printf("Printing..\n");
            print_list(first);
        }
        else if(sscanf(command, "%d", &age) != 0)
        {
            printf("Adding %d\n", age);
            if (first == NULL) {
                first = getNewPerson(age);
                if(first != NULL)
                {
                    added = first;
                }
            }
            else
            {
                added->next_in_line = getNewPerson(age);
                if(added->next_in_line != NULL)
                {
                    added = added->next_in_line;
                }
            }
            
        }
    }

}