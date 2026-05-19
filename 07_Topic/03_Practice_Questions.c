#include <stdio.h>

int countOddNumbers(int arr[], int n);
int reverseArray(int *arr, int n);

void StoreTable(int arr[][10], int n, int m, int num);

int main()
{
    /* Write a function to count the number of odd numbers in an array */
    /*int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    // int oddCount = countOddNumbers(arr, n);
    // printf("Number of odd numbers in the array: %d\n", oddCount);
    printf("%d\n", countOddNumbers(arr, n)); */

    /* Write a function to reverse an array */
    /* int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    reverseArray(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    } */

    /* Write a program to store the first n fibonacci numbers */
    /* int n;
    printf("Enter n (n>2) : ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d ", fib[i]);
    }
    printf("\n"); */

    /* Create a 2D array, storing the tables of 2 & 3 */
    int Table[2][10];
    StoreTable(Table, 0, 10, 2);
    StoreTable(Table, 1, 10, 3);

    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", Table[0][i]);
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \t", Table[1][i]);
    }

    return 0;
}

int countOddNumbers(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}

int reverseArray(int *arr, int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    return 0;
}

void StoreTable(int arr[][10], int n, int m, int num)
{
    for (int i = 0; i < m; i++)
    {
        arr[n][i] = num * (i + 1);
    }
}