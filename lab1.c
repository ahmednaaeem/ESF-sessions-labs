/* operators */
#include <stdio.h>

void main(void)
{
    unsigned char x = 20, y = 9;

    printf("%d \n", (x & y));
    printf("%d \n", (x | y));
    printf("%d \n", (y << 3));
    printf("%d \n", (x >> 1));
    printf("%d \n", (~x));
}