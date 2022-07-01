#include <stdio.h>
int main(void)
{
    int val;
    printf("enter your height in centimeters:");
    scanf("%d",&val);
    printf("Your height in inches %f\n", val * 2.54);
    return 0; 
}