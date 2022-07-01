#include <complex.h>
#include <stdio.h>
int main(void)
{
    float complex z = 1 + 2*I;
    printf("z=%.1f\n",z);
    printf("1/(1.0+2.0i) = %.1f%+.1fi \n", creal(z), cimag(z));
    z = 1/z;
    printf("1/(1.0+2.0i) = %.1f%+.1fi \n", creal(z), cimag(z));
}