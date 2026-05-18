#include <stdio.h>

void printHello();   // Function declaration/prototype
void printHW(int n); // Function declaration/prototype

int main()
{
    // printHello();            // Function call/invocation

    printHW(5); // Recursion

    return 0;
}

void printHello()
{ // Function definition
    printf("Hello World!\n");
    printf("My name is Mahesh.\n");
}

void printHW(int n)
{ // Function definition
    if (n <= 0)
    {
        return; // Base case to stop recursion
    }
    printf("Hello World!\n");
    printHW(n - 1); // Recursive call
}