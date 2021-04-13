#include <stdio.h>

void main(void)
{
    /* variables*/
    int n = 0, i = 0;

    /* input range*/
    printf(" enter range \n");
    scanf("%d", &n);

    /* output even numbers */
    printf("Even number in range 0~ %d \n", n);
    while ((i <= n))
    {
        if (i % 2 == 0)
            printf("%d \t", i);
        i++;
    }
}