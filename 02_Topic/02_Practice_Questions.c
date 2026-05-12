#include <stdio.h>

int main()
{

    // 1. Write a program to check if a number is divisible by 2 or not.
    // 2. Write a program to check if a number is odd or even.
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is divisible by 2.\n", number); // Question 1: Check if a number is divisible by 2
        printf("%d is even.\n", number);           // Question 2: Check if a number is odd or even
    }
    else
    {
        printf("%d is not divisible by 2.\n", number); // Question 1: Check if a number is divisible by 2
        printf("%d is odd.\n", number);                // Question 2: Check if a number is odd or even
    }

    /*Doubt*/
    int a, b = a;
    scanf("%d", &a); // a is uninitialized when assigned to b, which leads to undefined behavior
    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    // char ch = 'AA'; // overflow

    return 0;
}