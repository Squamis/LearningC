#include <stdio.h>
/*
Exercise 1-13. Write a program to print a histogram of the lengths of words in its input. It is
easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.

Note: I know this does not handle multible spaces. I did not interpret the prompt as asking for this.
*/

main(){
    int c;
    while((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t'){
            printf("\n");
        }
        else{
            printf("|");
            
        }
    }
}







