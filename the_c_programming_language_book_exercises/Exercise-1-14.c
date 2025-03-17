/*
Exercise 1-14. Write a program to print a histogram of the frequencies of different characters
in its input
*/
#include <stdio.h>
#define ATOZ  58
int main()
{
    int c, i, j, k, l;

    int ndigit[ATOZ];
    for (i = 0; i < ATOZ ; ++i){
    ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF)
        if (c != ' ' && c != '\n' && c != '\t'){
            ++ndigit[c-65]; //if  Iwas going to re-write the code I would use "A to z" as the define statment is somewhat missleading
            printf("the ASCII value of '%c' is %d\n", c,c );
        }
    for (j = 0; j < ATOZ; ++j){
        l = ndigit[j];
        printf("%c:",(j+65));
        for(k=0; k<l;k++){
            printf("|");
        }
        printf("\n");
    }

    return 0;
}    