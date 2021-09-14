#include<stdio.h>
/* I like we can build from one program more programs.

*/
int main (void) {
    int c;
        //Getting a character from Stdin
        //getchar gets from ACCIs table and returns (int). getchar need only INT
    c = getchar();
    while (c!= EOF){
        //print the character c;
        putchar(c);
        c = getchar();
    }

    return 0;



    //where can I get fileCopy?
}