#include <stdio.h>

void square(int n);
void _square(int *n);

void swap(int a, int b);
void _swap(int *a, int *b);

int main()
{
    /* 1. Syntax */
    /* int age = 22;
     int *ptr = &age;
     int _age = *ptr;
     printf("%d\n", _age);
     // address
     printf("%p\n", &age);
     printf("%p\n", ptr);
     printf("%p\n", &ptr);
     // // data
     printf("%d\n", age);
     printf("%d\n", *ptr);
     printf("%d\n", *(&age)); */

    /* 2. Pointers in Function call */

    // int number = 4;
    // // call by value
    // square(number);
    // printf("n is : %d\n", number);
    // // call by reference
    // _square(&number);
    // printf("n is : %d\n", number);

    // /* 3. Swap 2 numbers */

    // int x = 3,
    //     y = 5;
    // // call by value
    // swap(x, y);

    // printf("x = %d & y = %d\n", x, y);
    // // call by reference
    // _swap(&x, &y);
    // printf("x = %d & y = %d\n", x, y);

    return 0;
}

void square(int n)
{
    n = n * n;
    printf("square is : %d\n", n);
}
void _square(int *n)
{
    *n = *n * *n;
    printf("square is : %d\n", *n);
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = a;
}
void _swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = *a;
}