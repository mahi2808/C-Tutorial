#include <stdio.h>
#include <math.h>

void printHello();
void printGoodBye();
void Namaste();
void Bonjour();
int Sum(int a, int b);
void printTable(int num);
float AreaOfSquare(float side);
float AreaOfCircle(float radius);
float AreaOfRectangle(float length, float breadth);
int RecursionSum(int n);
int RecursionFactorial(int n);

int main()
{
    /* write 2 functions - one to print "Hello" & second to print "good bye". */

    /*printHello();
    printGoodBye();*/

    /* Write a function that prints Namaste if user is indian & Bonjour if the user is french */
    /*printf("enter i for indian & f for french\n");
    char language;
    scanf("%c", &language);
    if (language == 'i')
    {
        Namaste();
    }
    else if (language == 'f')
    {
        Bonjour();
    } */

    /* Write a function that takes two numbers as input and prints their sum */
    /*printf("enter 1st number");
    int num1;
    scanf("%d", &num1);
    printf("enter 2nd number");
    int num2;
    scanf("%d", &num2);
    int s = Sum(num1, num2);
    printf("Sum: %d\n", s); */

    /* Write a function that takes number from user and print table of that number */
    /* printf("enter a number");
    int num;
    scanf("%d", &num);
    printTable(num); // Arguments/Actual parameters */

    /* Use library functions to calculate the square of a number given by user */
    /* printf("enter a number");
    int num;
    scanf("%d", &num);
    double square = pow(num, 2);
    printf("Square: %lf\n", square); */

    /* Write function to calculate area of a square, a circle & a rectangle */
    /* printf("enter side of square");
    float side;
    scanf("%f", &side);
    float areaSquare = AreaOfSquare(side);
    printf("Area of Square: %f\n", areaSquare);

    printf("enter radius of circle");
    float radius;
    scanf("%f", &radius);
    float areaCircle = AreaOfCircle(radius);
    printf("Area of Circle: %f\n", areaCircle);

    printf("enter length and breadth of rectangle");
    float length, breadth;
    scanf("%f %f", &length, &breadth);
    float areaRectangle = AreaOfRectangle(length, breadth);
    printf("Area of Rectangle: %f\n", areaRectangle); */

    /* Sum of first n natural number using recursion */
    /*printf("enter a number");
    int n;
    scanf("%d", &n);
    int sum = RecursionSum(n);
    printf("Sum: %d\n", sum); */

    /* Factorial of a number using recursion */
    printf("enter a number");
    int n;
    scanf("%d", &n);
    int factorial = RecursionFactorial(n);
    printf("Factorial: %d\n", factorial);

    return 0;
}

void printHello()
{
    printf("Hello\n");
}

void printGoodBye()
{
    printf("Good Bye\n");
}

void Namaste()
{
    printf("Namaste\n");
}

void Bonjour()
{
    printf("Bonjour\n");
}

int Sum(int x, int y)
{
    // int Sum = x + y;
    // return Sum;

    return x + y;
}

void printTable(int num) // Parameters/Formal parameters
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

float AreaOfSquare(float side)
{
    return side * side;
}

float AreaOfCircle(float radius)
{
    return M_PI * radius * radius;
}

float AreaOfRectangle(float length, float breadth)
{
    return length * breadth;
}

int RecursionSum(int n)
{
    if (n == 1)
    {
        return 1; // Base case
    }
    return n + RecursionSum(n - 1); // Recursive call
}

int RecursionFactorial(int n)
{
    if (n == 1)
    {
        return 1; // Base case
    }
    return n * RecursionFactorial(n - 1); // Recursive call
}