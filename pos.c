#include <stdio.h>

void main(void)
{
    /* variables*/
    int pizza_amount = 0,
        burger_amount = 0,
        pasta_amount = 0;

    /* take the order */
    printf(" enter amount of pizza \n");
    scanf("%d", &pizza_amount);

    printf(" enter amount of burger \n");
    scanf("%d", &burger_amount);

    printf(" enter amount of pasta \n");
    scanf("%d", &pasta_amount);

    /* printing */
    printf(" class  \t amount \t price \t \n");
    printf(" pizza  \t   %d   \t   %d $ \n", pizza_amount, (pizza_amount * 12));
    printf(" burger \t   %d   \t   %d $ \n", burger_amount, (burger_amount * 10));
    printf(" pasta  \t   %d   \t   %d $ \n", pasta_amount, (pasta_amount * 8));
    printf(" total  \t   %d   \t   %d $ \n", (pizza_amount + burger_amount + pasta_amount),
           (pizza_amount * 12 + burger_amount * 10 + pasta_amount * 8));
}