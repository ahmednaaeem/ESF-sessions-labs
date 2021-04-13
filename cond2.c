
#include <stdio.h>

void main(void)
{
    int cnt = 0, num1, num2, num3, num4;

    printf(" enter 4 numbers \n");

    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    scanf("%d", &num4);

    if ((num1 == 3) || (num2 == 3) || (num3 == 3) || (num4 == 3))
    {
        cnt++;
    }

    if ((num1 == 7) || (num2 == 7) || (num3 == 7) || (num4 == 7))
    {
        cnt++;
    }

    if ((num1 == 8) || (num2 == 8) || (num3 == 8) || (num4 == 8))
    {
        cnt++;
    }

    if ((num1 == 9) || (num2 == 9) || (num3 == 9) || (num4 == 9))
    {
        cnt++;
    }
    printf(" you entered %d  correct numbers \n", cnt);
}