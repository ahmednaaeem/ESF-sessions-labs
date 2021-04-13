#include <stdio.h>

void main(void)
{
    int id = 0, passward = 0;

    printf("enter your ID \t");
    scanf("%d", &id);

    printf("enter your passward \t");
    scanf("%d", &passward);

    switch (id)
    {
    case 12:
        if (passward == 1234)
        {
            printf(" name : ahmed \t grade : A \n");
        }
        break;

    case 10:
        if (passward == 1234)
        {
            printf(" name : sayed \t grade : A \n");
        }
        break;

    case 11:
        if (passward == 1234)
        {
            printf(" name : Khaled \t grade : C \n");
        }
        break;
    }
}