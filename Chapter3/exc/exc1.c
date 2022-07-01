#include <stdio.h>
int main(void)
{
    int a = 0xFFFFFFFF;
    printf("%#x %d\n",a,a);

    float b = 1e38;
    printf("%f after overflow %f\n",b,b* 1e5f);

    float toobig = 3.4E38 * 100.0f;
    printf("%e\n", toobig);

    float c = 1e-5;
    printf("%f after underflow %f\n",c,c*1e-10);
}