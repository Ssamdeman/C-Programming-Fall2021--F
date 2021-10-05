
/* -----------This is Macros and Conditional Inclusion ------------- */
/* 10-05-2021 11:42:57 neeed more attention; 
 #define SYSV 100
 #define BSD 101

#define SYSTEM SYSV

#if SYSTEM == SYSV
#define HDR "sysv.h"
#elif SYSTEM == BSD
#define HDR "bsd.h"
#else
#define HDR "default.h“
#endif
#include HDR
*/
/* -------------------------------------------------------------------------- */

/* 10-05-2021 11:46:29 need attention on recersive Funtion and combinatory
learn about fibonnacci
10-05-2021 12:04:24 so we take a code and tried to find the best way to execute it

*/
#include<stdio.h>

 int factortial(int x){
       if(x > 1) return x * factortial(x-1); 
       return 1;
    }

int main (void){
    int x = 5;

   







}




































/* -------------------------------------------------------------------------- */
/*                      DEBUG System to be solve problems                    


#define DEBUG

#define JOHN
#define JANE

#include<stdio.h>

#ifdef JANE
#include<math.h>
#endif


#ifdef JOHN
#include<string.h> 
#endif


int main(void){
#ifdef JOHN 
    char str[] = "Hello World";
    printf("Leng of the Str = %lu \n", strlen(str));
#endif

#ifdef JANE
    double x = 100;
    x = log(x);
    printf("x = %f \n", x);
#endif
}
 */
/* -------------------------------------------------------------------------- */