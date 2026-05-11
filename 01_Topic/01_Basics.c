// Basics of C Programming
#include <stdio.h>
int main()
{
    // Variables (Single line comment example)
    int Number = 25;
    char Star = '*';
    int age = 26;
    float pi = 3.14;

    /* Data Types  (Multi-line comment example) */
    int Age = 22;
    float Pi = 3.14;
    char hashtag = '#';

    /* Output */
    printf("Mahesh");                 /*printf without newline */
    printf("Mahesh\n");               /*printf with newline */
    printf("Age: %d\n", Age);         /* Output integer variable */
    printf("Pi: %.2f\n", Pi);         /* Output float variable with 2 decimal places */
    printf("Hashtag: %c\n", hashtag); /* Output char variable */

    /* Input */
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    printf("Year entered: %d\n", year);

    /* Addition of two numbers using scanf */
    int num1, num2, sum;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    // sum = num1 + num2;
    // printf("Sum: %d\n", sum);

    // Above code using short form directly in printf
    printf("Sum: %d\n", num1 + num2);

    return 0;
}