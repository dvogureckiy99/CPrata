// input.c -- when to use &
#include <stdio.h>
int main(void)
{
    printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);
    int b; 
    scanf("%*s %d",&b);
    printf(" %d\n",b); 

    return 0;   
}