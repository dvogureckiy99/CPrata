/* showf_pt.c -- displays float value in two ways */
#include <stdio.h>
int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;
    printf("size of float: %d, double:%d, long double: %d\n",sizeof(aboat),sizeof(abet),sizeof(dip));
    printf("%f can be written %.3e\n", aboat, aboat);
    // next line requires C99 or later compliance
    printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);
    printf("%f can be written %.3E\n", abet, abet);
    printf("%Lf can be written %.3LE\n", dip, dip);

    float toobig = 3.4E38 * 100.0f;
    printf("%e %f\n", toobig,toobig);

    return 0;
}