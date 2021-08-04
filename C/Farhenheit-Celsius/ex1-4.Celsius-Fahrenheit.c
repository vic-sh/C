# include <stdio.h>
/* print Fahrenheit-Celsius table
    for fahr = 0, 20, ..., 300 */
main()

{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;  /* lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size*/

    celsius = lower;
    printf("CELSIUS FAHR\n");
    while (celsius<= upper)
    {
        fahr = celsius * 9.0/5.0 + 32;
        printf("%5.0f %5.0f\n", celsius, fahr);
        celsius = celsius + step;
    }
}