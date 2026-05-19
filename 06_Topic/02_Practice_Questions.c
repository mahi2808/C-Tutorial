#include <stdio.h>

void doWork(int a, int b, int *sum, int *product, float *average);
int main()
{
    /* print the value of 'i' from its pointer to pointer */
    /* int i = 10;
    int *ptr = &i;
    int **ptr_to_ptr = &ptr;
    printf("Value of i: %d\n", **ptr_to_ptr); */

    /* Write a function to calculate the sum, product & average of 2 numbers. print that average in the main function. */
    int sum, product;
    float average;
    doWork(5, 10, &sum, &product, &average);
    printf("Sum: %d, Product: %d, Average: %.2f\n", sum, product, average);

    return 0;
}

void doWork(int a, int b, int *sum, int *product, float *average)
{
    *sum = a + b;
    *product = a * b;
    *average = (float)(*sum) / 2;
}