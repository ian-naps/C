#include <stdio.h>
/*Print Celsius-Fahrenheit table for fahr = 0, 20, ..., 300 ; floating point version*/

main()
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 0; /* lower limit of temperature scale*/
    upper = 300; /* upper limit*/
    step = 20; /* step size*/

    celsius = lower;
    printf("Celsius -> Fahrenheit\n");
    while (celsius <= upper) {
        fahr = (celsius * (9.0/5.0)) + 32;
        printf("%5.0f %15.2f\n", celsius, fahr);
        celsius = celsius + step;
    }
}