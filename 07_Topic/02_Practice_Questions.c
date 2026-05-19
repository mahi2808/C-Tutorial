#include <stdio.h>

int main()
{
    /* Write a program to enter price of 3 items & print their final cost with gst */
    float price[3] = {100.0, 200.0, 300.0}; // Example prices
    // float price[3];
    // printf("Enter price of 3 items : ");
    // for(int i=0; i<3; i++){
    //     scanf("%f", &price[i]);
    // }
    printf("Final costs with GST:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Item %d: %.2f\n", i + 1, price[i] * 1.18); // Assuming 18% GST
    }
    return 0;
}