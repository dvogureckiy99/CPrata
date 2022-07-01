#include <stdio.h>
int main(void)
{
    float val;
    printf("enter volume in cups:");
    scanf("%f",&val);
    printf("volume in pints:%f\nvolume in ounces:%f\nvolume in tablespoons:%f\nvolume in teaspoons:%f", val / 2,val*8,val*16,val*48);
    return 0;
}