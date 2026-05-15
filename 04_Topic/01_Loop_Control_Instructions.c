#include <stdio.h>
int main()
{
    /* 1. Syntax of 3 Loops */

    /* for loop */
    /* for (int i = 1; i <= 100; i++)
    {
        printf("%d\n", i);
    } */

    /* while loop */
    /* int i = 1;
    while (i <= 100)
    {
        printf("%d\n", i);
        i++;
    } */

    /* do while loop */
    /* int i = 1;
    do
    {

        printf("%d\n", i);
        i++;
    } while (i <= 100); */

    /* Loop counter  float */
    /* for (float i = 1.0; i <= 1.6; i += 0.1)
    {
        printf("%.1f\n", i);
    } */

    /* Loop counter character */
    /* for (char ch = 'a'; ch <= 'z'; ch++)
    {
        printf("%c\n", ch);
    } */

    int i = 1;
    while(i<=5)
    {
        printf("%d\n",i);
        i++;
    }

    return 0;
}