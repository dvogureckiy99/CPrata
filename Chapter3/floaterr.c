/* floaterr.c--demonstrates round-off error */
#include <stdio.h>
#include <complex.h>
int main(void)
{
float a,b;
b = 2.0e20;
printf("%f \n", b);
b = b + 1.0;
printf("%f \n", b);
a = b - 2.0e20;
printf("%f \n", a);

float c = 2.0e-10;
printf("%f\n",c);
c /= 1e5;
printf("%f\n",c);

float _Complex ab =  I * 3.5e4;
printf("%f\n",ab);
return 0;
}