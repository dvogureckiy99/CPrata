#include <stdio.h>
int main(void)
{
int n = -1;
char m = 'a';
while (n++ < 6)
{printf("%5c", m+n);}
printf("\n");
return 0;
}