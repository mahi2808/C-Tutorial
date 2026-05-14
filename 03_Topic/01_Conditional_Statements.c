#include <stdio.h>
#include <math.h>

int main()
{
    /* 1. If-else */

    // int age = 16;
    // if(age >= 18) {
    // printf("you are an adult");
    // }
    // else {
    // printf("you are not an adult");
    // }

    /* check if a number is odd or even */

    // int number;
    // scanf("%d", &number);
    // if(number % 2 == 0) {
    // printf("even");
    // }
    // else {
    // printf("odd");
    // }

    /* Use of else if */

    // int age;
    // printf("Enter age : ");
    // scanf("%d", &age);
    // if(age < 12) {
    // printf("child");
    // }
    // else if(age < 18) {
    // printf("teenager");
    // }
    // else {
    // printf("adult");
    // }

    /* 2. Ternary Operator */

    // int age;
    // printf("Enter age : ");
    // scanf("%d", &age);
    // age > 18 ? printf("adult \n") : printf("not adult \n");
    // int number = 7;

    // int luckyNumber = 7;
    // number == luckyNumber ? printf("you are lucky \n") : printf("you are not lucky \n");

    /* 3. Switch (integer) */

    // int day = 5;
    // switch (day)
    // {
    // case 1:
    //     printf("monday \n");
    //     break;
    // case 2:
    //     printf("tuesday \n");
    //     break;
    // case 3:
    //     printf("wednesday \n");
    //     break;
    // case 4:
    //     printf("thursday \n");
    //     break;
    // case 5:
    //     printf("friday \n");
    //     break;
    // case 6:
    //     printf("saturday \n");
    //     break;
    // case 7:
    //     printf("sunday \n");
    //     break;
    // }

    /* 4. Switch(character) */
    
    char day = 'S';
    switch (day)
    {
    case 'm':
        printf("monday \n");
        break;

    case 't':
        printf("tuesday \n");
        break;
    case 'w':
        printf("wednesday \n");
        break;
    case 'T':
        printf("thursday \n");
        break;
    case 'f':
        printf("friday \n");
        break;
    case 's':
        printf("saturday \n");
        break;
    case 'S':
        printf("sunday \n");
        break;
    }

    return 0;
}