/* bases.c--prints 100 in decimal, octal, and hex */
#include <stdio.h>
int main(void)
{
    unsigned short int d;
    unsigned int b;
    unsigned long int c;
    long long  a;
    char e;
    printf("size of long long: %d\n",sizeof(a));
    printf("size of int: %d\n",sizeof(b));
    printf("size of long int: %d\n",sizeof(c));
    printf("size of short int: %d\n",sizeof(d));
    printf("size of char: %d\n",sizeof(e));

    return 0;
}