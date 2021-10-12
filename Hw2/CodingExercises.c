#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b, tempholder, valueChecker ;
    scanf("%d\n%d", &a, &b);
    for(tempholder = a; tempholder <= b; tempholder++){
     if (tempholder == 1) printf("one\n");
     if (tempholder == 2) printf("two\n");
     if (tempholder == 3) printf("three\n");
     if (tempholder == 4) printf("four\n");
     if (tempholder == 5) printf("five\n");
     if (tempholder == 6) printf("six\n");
     if (tempholder == 7) printf("seven\n");
     if (tempholder == 8) printf("eight\n");
     if (tempholder == 9) printf("nine\n");
    }
    for (valueChecker = a;valueChecker <= b; valueChecker++ ) {
     if( valueChecker <= 9 && valueChecker % 2 == 0 ) printf("even\n");
    

     if (valueChecker >= 9 && valueChecker % 2 != 0) printf("odd\n");
    }
    return 0;
}

