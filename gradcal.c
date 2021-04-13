#include <stdio.h>
void main(void)
{
    /* variables 8*/
    double grade = 0;

    /* enter data */

    printf(" enter your grade \n ");
    scanf("%d", &grade);

    /*  level 1  85.0 ~ 100 */
    if ((grade >= 85.0) && (grade <= 100.0))
        printf("your level is A \n");

    /*  level 2  75.0 ~ 85.0  */
    else if ((grade >= 75.0) && (grade < 85.0))
        printf("your level is B \n");

    /*  level 3  65.0 ~ 75.0  */
    else if ((grade >= 65.0) && (grade < 75.0))
        printf("your level is C \n");

    /*  level 4  50.0 ~ 65.0  */
    else if ((grade >= 50.0) && (grade < 65.0))
        printf("your level is D \n");

    /*  level 5     < 50.0  */
    else if ((grade >= 0.0) && (grade < 50.0))
        printf("your level is F \n");
    /* grade out of 0~100 */
    else
        printf(" Please enter grade from 0 to 100 and try again \n");
}
