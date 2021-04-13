#include <stdio.h>

void main(void)
{
    /* variables*/
    int n = 0, f = 1;

    /* input range*/
    printf(" enter number \n");
    scanf("%d", &n);
    if (n < 0)
        printf(" Error : enter postive number  \n");
    else
    {
        while (n > 1)
        {

            f = f * n;
            n--;
        }

        /* output even numbers */
        printf("the factorial is %d\n", f);
    }
}