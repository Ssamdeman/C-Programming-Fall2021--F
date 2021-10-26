#include <stdio.h>
#include<stdlib.h>


int main (void){
    int* p;
    printf("Value before malloc %lu \n", (unsigned long) p);
    p = malloc(sizeof(int)); /// allocation?
    printf("Value after malloc %lu \n", (unsigned long) p);



}



/* 
int main(int argc, char *argv[])
{
    int sum = 0;

    for (int i = 1; i < argc; i++)
    {
        int value = atoi(argv[i]);
        sum += value;
    }
 */
    /*
    int main(int argc, char* argv[]){
        // argc = number of the arguments on the comman line
        //argv = list of artuments
        //

        printf("name of the programming %s\n ", argv[0]);
        printf("Just typede CMD line: ");
        for(int i = 0; i <argc; i++){
            printf("%s ", argv[i]);
        }
        return 0;

    } 


    // swap the pointer p and p1;

    void swapAddress(int** addressof_p, int** address_p1){
        int* x;
        x = *addressof_p;
        *addressof_p = *address_p1;
        *address_p1 = x;
    }

    //swap two things

    void swap(int* pi, int* pj){
        int x = *pi;
        *pi = *pj;
        *pj = x;


    }

    int main(void){

        int* p;
        int* p1;
        p = 100;
        p1 = 200;
        printf("value of p  is %lu \n", (unsigned long)p);
        printf("value of p1  is %lu \n",  (unsigned long)p1);
        swapAddress(&p, &p1);
        printf("value of p  is %lu \n",  (unsigned long)p);
        printf("value of p1  is %lu \n",  (unsigned long)p1);


        // swap the p and p1;
    */