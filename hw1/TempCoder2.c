#include<stdio.h>



void swappingMine(int *newletter, int *oldletter){
    int tempHolderNewLetter = *newletter;
    int tempHolderOldLetter = *oldletter;
   *oldletter = tempHolderNewLetter;
    // take the new elemnt and put in to the old one.
}
int main (void){
    char holder = 'C';

    char arr[100] = {'1', '2','c'};

    printf("%s \n", arr);
    arr[2] = holder;
    printf("%s \n", arr);   

 
}