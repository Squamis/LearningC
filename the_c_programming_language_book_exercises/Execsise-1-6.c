#include <stdio.h>

//Exercsise 1-6. Verify that the expression getchar() != EOF is 0 or 1.

int main(){

    int x;
    
    x =  getchar() != EOF;
    printf("the numaric value of x is %d",x);

    return 0;
}