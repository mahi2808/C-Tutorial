#include <stdio.h>

float ConvertTemperature(float celsius);
int CalculatePercentage(int scienceMarks, int mathMarks, int sanskritMarks);
int Fibonacci(int n);

int main()
{
    /* Write a function to convert temperature from Celsius to Fahrenheit */
    /*printf("enter temperature in Celsius");
    float celsius;
    scanf("%f", &celsius);
    float fahrenheit = ConvertTemperature(celsius);
    printf("Temperature in Fahrenheit: %f\n", fahrenheit);
*/

    /* Write a function to calculate percentage of a student from Marks in Science, Math & Sanskrit */
    /*int sc = 98;
    int math = 98;
    int sanskrit = 99;
    printf("Percentage: %d%%\n", CalculatePercentage(sc, math, sanskrit)); */

    /* Write a function to print nth term of the fibonacci sequence */
    printf("%d\n", Fibonacci(6)); // Print 6 terms of Fibonacci sequence

    return 0;
}

float ConvertTemperature(float celsius)
{
    return (celsius * 9 / 5) + 32;
}

int CalculatePercentage(int scienceMarks, int mathMarks, int sanskritMarks)
{
    int totalMarks = scienceMarks + mathMarks + sanskritMarks;
    return (totalMarks / 300.0) * 100; // Assuming each subject is out of 100
}

int Fibonacci(int n)
{
    if (n == 0)
    {
        return 0; // Base case
    }
    else if (n == 1)
    {
        return 1; // Base case
    }
    return Fibonacci(n - 1) + Fibonacci(n - 2); // Recursive call
}