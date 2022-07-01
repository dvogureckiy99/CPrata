#include "stdio.h"
int main(void)
{
    #define FEET_PER_CENT 0.033
    #define INCHES_PER_CENT 0.39
    float cent, inches, feet;
    printf("Enter a height in centimeters: ");
    scanf("%f",&cent);
    while(cent > 0){
        inches = cent * INCHES_PER_CENT ;
        feet = cent * FEET_PER_CENT ; 
        printf("%.1f cm = %.0f feet, %.1f inches\n",cent,feet,inches);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f",&cent);
    }
    printf("bye\n");
    return 0;
}