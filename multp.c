#include <stdio.h>

void main(void)
{
    /* variables*/
    int n = 0;

    /* input range*/
    printf(" enter number \n");
    scanf("%d", &n);

    for (int i = 1; i <= 12; i++)
    {
        printf(" %d X %d = %d \n", n, i, (n * i));
    }
}