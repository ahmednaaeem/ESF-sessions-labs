#include <stdio.h>

void main(void)
{
    int arr[10] = {0};
    int i = 0;
    int max = 0, min = 0;
    printf(" Enter values\n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (i == 0)
        {
            max = arr[0];
            min = arr[0];
        }
        if (max <= arr[i])
            max = arr[i];
        if (min >= arr[i])
            min = arr[i];
    }

    printf(" maxmium value : \t %d \n minumum value : \t %d \n", max, min);
}