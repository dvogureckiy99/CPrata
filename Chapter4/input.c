// input.c -- when to use &
#include <stdio.h>
int main(void)
{
    int age;
    // variable
    float assets;
    char pet[30];
    // variable
    // string
    printf("Enter your age, assets, and favorite pet.\n");
    scanf("%d %a", &age, &assets); // use the & here
    scanf("%s", pet);
    // no & for char array
    printf("%d $%.2f %s\n", age, assets, pet);

    float a1;
    a1 = 0x1.a31p5;
    printf("\n %a",a1);
    return 0;
}