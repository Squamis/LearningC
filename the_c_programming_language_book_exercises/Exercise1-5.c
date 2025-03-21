/*Exercise 1-5.
reverse order of the table, from 300 to 0 degrees 
*/
#include <stdio.h>
/* print Fahrenheit-Celsius table
for fahr = 0, 20, ..., 300; floating-point version */
main(){
    float fahr, celsius;
    float lower, upper, step;
    lower = 0; /* lower limit of temperatuire scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = upper;

    printf("Fahrenheit Celsius\n");
    while (fahr >= lower) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f        %6.1f\n", fahr, celsius);
        fahr = fahr - step;
    }
}