#include <stdio.h>

int main()
{
    /* Keep taking numbers as input from user until user enters an odd number.*/
    /* int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num % 2 == 0){
        printf("Enter another number: ");
        scanf("%d", &num);
    }
    printf("You entered an odd number: %d\n", num); */

    /* using do while and break */
    /* int num;
    do {
        printf("Enter another number: ");
        scanf("%d", &num);
        if(num % 2 != 0) {
            break;
        }
    } while(1);
    printf("You entered an odd number: %d\n", num); */

    /* keep taking numbers as input from user until user enters a number which is multiple of 8.*/
    /* int num;
    do {
        printf("Enter another number: ");
        scanf("%d", &num);
        if(num % 8 == 0) {
            break;
        }
    } while(1);
    printf("You entered a number that is a multiple of 8: %d\n", num); */

    /* print all numbers from 1 to 10 except for 7 */
    /* for (int i = 1; i <= 10; i++)
    {
        if (i == 7)
        {
            continue;
        }
        printf("%d \n", i);
    } */

    /* print all the odd numbers from 5 to 50*/
    /* for (int i = 5; i <= 50; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d \n", i);
        }
    } */

    /* print the factorial of a number n */
    /* int n, factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial of %d is %d\n", n, factorial); */

    /* print reverse of the table for a number n */
    /* int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    } */

    /* Calculate the sum of all numbers between 5 and 50.(INCLUDING 5 & 50)*/
    /* int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("Sum of numbers between 5 and 50 is %d\n", sum); */


    /*  use of break in nested loop */
    for (int i = 1; i <= 10; i++)
    {
        for (int j = 1; j <= 10; j++)
        {
            printf("%d ", i * j);
            if (i * j == 30)
            {
                break;
            }
        }
        printf(" outer loop running\n");
        printf("\n");
    }
    printf("end of nested loop\n");
    return 0;
}