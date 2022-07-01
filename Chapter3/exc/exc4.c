#include <stdio.h>
int main(void)
{
    float val;
    printf("Enter a floating-point value:");
    scanf("%f",&val);
    printf("fixed-point notation:%f\n",val);
    printf("exponential notation: %E\n",val);
    printf("p notation: %a\n",val);
    return 0 ;
}