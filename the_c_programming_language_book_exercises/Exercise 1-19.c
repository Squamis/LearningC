


/*Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time
*/
//again I know that a better version of this would use dynamic memory for the declaraton of the array backwards, that has not been covered in the book yet 

#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */
int getline(char line[], int maxline);
void copy(char to[], char from[]);
void reverse (char forward[], int length);
/* print the longest input line */
int main(){
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */
    max = 0;
    while ((len = getline(line, MAXLINE)) > 0)
        if (len > 80 ) {
            printf("%s",line);
        if (len > max) {
        max = len;
        copy(longest, line);
    }
    
    if (max > 0){ /* there was a line */
        printf("the length of the longest line is %d charatures long",max);
        printf("%s", longest);
    }
    return 0;
}

/* getline: read a line into s, return length */
int getline(char s[],int lim){
    int c, i;
    for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[]){
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}

void reverse(char forward[], int length ){
/*Exercise 1-19. Write a function reverse(s) that reverses the character string s. Use it to
write a program that reverses its input a line at a time
*/
        char backwards[length];
        int j;
        j = 0;
        for(int i = length-1; i >= 0; i--){
            backwards[j] = forward[i];
            j++;
        }
        backwards[j] = '\0';
        printf("%s", backwards);
}

