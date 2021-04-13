#include <stdio.h>

void main(void)
{
    int cnt = 0, num = 0;

    printf(" enter 4 digits passward \n");

    scanf("%d", &num);
    if (num == 3)
    {
        cnt++;
    }

    scanf("%d", &num);

    if (num == 7)
    {
        cnt++;
    }

    scanf("%d", &num);

    if (num == 8)
    {
        cnt++;
    }

    scanf("%d", &num);
    if (num == 9)
    {
        cnt++;
    }

    if (cnt == 4)
    {
        printf("locker is unlocked \n");
    }
    else
    {
        printf(" sorry try again \n");
    }
}