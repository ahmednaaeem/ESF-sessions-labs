#include <stdio.h>

void main(void)
{
    int x, y, z;
    printf(" enter two numbers \n");
    printf(" frisr numbers\t");
    scanf("%d", &x);
    printf(" second numbers \t");
    scanf("%d", &y);
    z = (x > y) ? x : y;
    printf("the bigesst number is \t %d", z);
}