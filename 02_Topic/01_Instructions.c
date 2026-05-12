#include <stdio.h>

int main()
{
    // 1. Type Declaration Instructions
    int age = 26;
    int oldAge = age;
    int newAge = oldAge + 2;
    printf("new age is : %d", newAge);
    float rupee = 1, dollar;
    dollar = 95.50;
    /*
    order of declaration is important - Wrong Declaration Order
    float pi = 3.14;
    float area = pi * radius * radius;
    float radius = 3;
    */

    // valid declaration
    int age1, age2, age3;
    age1 = age2 = age3 = 26;
    // invalid
    // int a1 = b2 = c3 = 26;

    // 2. Arithmetic Instructions
    int a1 = 1, b1 = 2, c1 = 3;
    // valid
    a1 = b1 + c1;
    // invalid
    //  b1 + c1 = a1;

    printf("%d \n", 3 % 2);
    printf("%d \n", -3 % 2);

    //    Type Conversion
    printf("sum of 2 & 3 : %d", 2 + 3);
    printf("sum of 2.0 & 3 : %f", 2.0 + 3);
    printf("sum of 2.0 & 3.0 : %f", 2.0 + 3.0);

    // Associativity
    printf(" Output : %d", 5 + 2 / 2 * 3);

    // 3. Relational Operator
    printf("%d \n", 4 == 4);
    printf("%d \n", 4 < 3);
    printf("%d \n", 3 < 4);
    printf("%d \n", 4 < 4);
    printf("%d \n", 4 <= 4);
    printf("%d \n", 4 > 3);
    printf("%d \n", 3 > 4);
    printf("%d \n", 4 > 4);
    printf("%d \n", 4 >= 4);
    printf("%d \n", 4 != 4);
    printf("%d \n", 3 != 4);

    // 4. Logical Operator
    printf("%d \n", 3 < 4 && 3 < 5);
    printf("%d \n", 3 < 4 && 5 < 4);
    printf("%d \n", 3 < 4 && 5 < 4);
    printf("%d \n", 3 > 4 && 5 > 4);
    printf("%d \n", 3 < 4 && 3 < 5);
    printf("%d \n", !(3 < 4 && 3 < 5));
    printf("%d \n", !(4 < 3 || 5 < 3));

    // 5. Assignment Operator
    int a = 10;
    a += 10;
    printf("a+10 = %d \n", a);
    a -= 10;
    printf("a-10 = %d \n", a);
    a *= 10;
    printf("a*10 = %d \n", a);
    a /= 10;
    printf("a/10 = %d \n", a);
    a %= 10;
    printf("a%c10 = %d \n", '%', a);

    return 0;
}