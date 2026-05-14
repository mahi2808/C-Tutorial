
#include <stdio.h>

int main()
{
    /* Write a program to check if a student passed or failed based on their marks.The passing mark is 35. */

    /* int marks;
    printf("Enter the marks obtained by the student between 0 and 100: ");
    scanf("%d", &marks);
    if (marks >= 0 && marks < 35)
    {
        printf("Sorry, you failed. Better luck next time.\n");
    }
    else if (marks >= 35 && marks <= 100)
    {
        printf("Congratulations! You passed.\n");
    }
    else
    {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    } */

    /* Using ternary operator */

    // marks >=35? printf("Congratulations! You passed.\n") : printf("Sorry, you failed. Better Luck next time.\n");

    /* Write a program to give grades to a student,
    marks <35 is C
    30 <= marks < 70 is B
    70 <= marks < 90 is A
    90 <= marks <= 100 is A+ */

    /* int marks;
    printf("Enter the marks obtained by the student between 0 and 100: ");
    scanf("%d", &marks);
    if(marks < 35)
    {
        printf("Grade: C\n");
    }
    else if (marks >= 35 && marks < 70)
    {
        printf("Grade: B\n");
    }
    else if (marks >= 70 && marks < 90)
    {
        printf("Grade: A\n");
    }
    else if (marks >= 90 && marks <= 100)
    {
        printf("Grade: A+\n");
    }
    else
    {
        printf("Invalid marks. Please enter marks between 0 and 100.\n");
    } */

    /* Write a program to find if a character entered by user is uppercase or not. */

    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("The character is uppercase.\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("The character is lowercase.\n");
    }
    else
    {
        printf("The character is not an english letter.\n");
    }

    return 0;
}