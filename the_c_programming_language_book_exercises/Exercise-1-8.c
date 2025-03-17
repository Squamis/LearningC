#include <stdio.h>

//Exercise 1-8. Write a program to count blanks, tabs, and newlines.

int main() {

    int c;
    int blanks, tabs, nl;
    blanks = tabs = nl = 0;

    
    c = getchar();
    while (c != EOF) {
        if(c == ' '){
            blanks++;
        }
        if(c == '\t'){
            tabs++;
        }
        else if(c == '\n'){
            nl++;
        }
        c = getchar();
    }
    printf("blanks: %d \t tabs: %d \t newlines: %d \n", blanks,tabs,nl);

    return 0;

}