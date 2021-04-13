#include <stdio.h>

void main(void)
{
    /* variables*/
    int pizza_amount = 0,
        burger_amount = 0,
        pasta_amount = 0;
    char ord = 0, ord1 = 0;

    /* take the order */
l:
    printf(" what do you want pizza(p) , burger(b) or pasta (s))\n");
    scanf("%c", &ord);
    if (ord == 'p')
    {
        printf(" enter amount of pizza \n");
        scanf("%d", &pizza_amount);
        printf(" class  \t amount \t price \t \n");
        printf(" pizza  \t   %d   \t   %d $ \n", pizza_amount, (pizza_amount * 12));
    }
    else if (ord == 'b')
    {
        printf(" enter amount of burger \n");
        scanf("%d", &burger_amount);
        printf(" class  \t amount \t price \t \n");
        printf(" burger \t   %d   \t   %d $ \n", burger_amount, (burger_amount * 10));
    }
    else if (ord == 's')
    {
        printf(" enter amount of pasta \n");
        scanf("%d", &pasta_amount);
        printf(" class  \t amount \t price \t \n");
        printf(" pasta  \t   %d   \t   %d $ \n", pasta_amount, (pasta_amount * 8));
    }
    else
    {
        printf(" please enter p , b or s \n");
        goto l;
    }
    printf(" Do you want any thing else? (y or n) \n");
    scanf("%c", &ord1);

    if (ord1 == 'y')
        goto l;

    /* printing */
    printf(" class  \t amount \t price \t \n");
    printf(" pizza  \t   %d   \t   %d $ \n", pizza_amount, (pizza_amount * 12));
    printf(" burger \t   %d   \t   %d $ \n", burger_amount, (burger_amount * 10));
    printf(" pasta  \t   %d   \t   %d $ \n", pasta_amount, (pasta_amount * 8));
    printf(" total  \t   %d   \t   %d $ \n", (pizza_amount + burger_amount + pasta_amount),
           (pizza_amount * 12 + burger_amount * 10 + pasta_amount * 8));
}