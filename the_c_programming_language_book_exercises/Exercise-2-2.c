//Exercise 2-2. Write a loop equivalent to the for loop above without using && or ||.
// this is on page 40 for ref
for (i=0; i < lim-1 && (c=getchar()) != '\n' && c != EOF; ++i)
s[i] = c;
//you would just break this out int if statements that termenate if they are wrong
