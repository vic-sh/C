#include <stdio.h>

/* copy input to output; 1-st version */
main()
{
    int c;
    c = 1;

    c = getchar();
    while(c != EOF) {
        putchar(c);
        c = getchar();
        printf("%d", c);
    }
}