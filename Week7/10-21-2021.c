#include<stdio.h>


/* --------------------------------------------------------------------------
/*       10-22-2021 21:06:32   Here is another that share via friend                         
-------------------------------------------------------------------------- */

/* -------------------------------------------------------------------------- 
                                   Goal:
    Read a number of strings from standard input
    where each string appears on a separte line
    using pointers to represtent these strings
    assume max length of each string is 10000
    max number of strings is 10
                                    
 -------------------------------------------------------------------------- */

#define MAX_NUM_STRINGS 10

void printStrings(char* array[], int num_strings){
    // print a list of strings represented by an array
    int i;
    for(i = 0; i < num_strings; i++){
        printf("\n%s", array[i]);
    }
}

int main()
{
    char str[10000];
    // need a variable to store the list of strings
    char* list[MAX_NUM_STRINGS];
    int i = 0;          // position in string
    int line_count = 0; // position in list array
    char* currString;
    // check for empty file
    int ch;
    
    ch = getchar();
    if (ch == EOF) return 0;
    currString = str;
    // if we get this far, file is not empty
    while (line_count <= MAX_NUM_STRINGS - 1) {
        if (ch == EOF) {
            str[i] = '\0';
            break;
        }
        if (ch == '\n') {
            str[i] = '\0';
            list[line_count] = currString;
            // store address of string in list array
            i++;
            currString += i;
            line_count++;
        }
        else {
            str[i] = ch;
            i++;
        }
        ch = getchar();
    }
    printStrings(list, line_count);
    
    return 0;
}











































/* -------------------------------------------------------------------------- */
/*                             10-22-2021 20:57:42 did for the classes that I missed on 10-22-2021 20:58:50 - 1 day\  
    Give Attention to the  line 85 and below
                  */

void printAnySizeArray (char* p, int d, int* size){
    // p = address of the array
    // d = dimentionally 
    // size = numbers of each array
    int i;
    int n_element = 1;
    for (i = 0; i < d; i++) n_element = n_element *  size[i];

    for(i = 0; i < n_element; i++){
        printf("values %d^th elemnt %c\n", i, *(p+i));

    }

}


void print3dPointer(char* p, int n1, int n2, int n3){
    int i,j,k;
// N = n2; P = n3; M = n1
    for(i = 0; i< n1; i++){
        for(j = 0; j < n2; j++){
            for(k = 0; k < n3; k++){
                ///print value position of [i] [j][k];
                printf("%c,", *(p + (i*n2*n3) + j*n3 +k)); /// For for 3d Dimention
            }
        }printf("\n");
    }printf("\n");


}


//10-22-2021 12:48:52 printing from 2 Dimentional
void printing2DimenArray(char* p, int M, int N){
    int i,j;
    
    for (i = 0; i < M; i++){
        for (j = 0; j < N; j++){
            printf("%c,", *(p+i * N + j)); ///
        }
        printf("\n");
    }
}

/* int main(void){
//10-22-2021 12:30:42 One Dimen of array with points
    int a[] = {1,2,3};
    int* pt;
    pt = a;
    /// *(p+2) = a[2];


//10-22-2021 12:30:42 Two Dimen of array with points
char d[][3] = {
    {'a','b','c'},
    {'d','e','g'}
};
char* ptchar;
ptchar = &(d[0][0]);

///printing2DimenArray(ptchar,2,3);


char b [][2][3] = {
    {{'a','b','c'},  {'d','e','g'}},
    {{'1','2','3'}, {'x','y','z'}}
};

char* ptchar2;

ptchar2 = &(b[0][0][0]);

///print3dPointer(ptchar2, 2, 2,3);
int tempArray[] = {2,2,3};
int* tempPt;
tempPt = tempArray;
printAnySizeArray(ptchar2, 3, tempPt );
//Goal: Print only first Array;  and Second and third and so on.

return 0;


// formula for any array dimention. Assuming P is address of n array
//a[n1]  address of a[i] = p +i *1
//a[n1][n2] address of a[i][j] = p + i * n2 +j
//a[n1][n2][n3] address a[i][j][k] = p + i * n2*n3 + j * n3 + k
//a[n1d][n2][n3][n4] address a[i][j][k][x] = p + i *n2*n3*n4 + j*n3*n4 + k*n4 + x
//a[n1d][n2][n3][n4][n5] adress a[i][j][k][x][y] = p + i*n2*n3*n4*n5 + j*n3*n4*n5 + k *n4*n5 + x*n5+ y






}
 */


