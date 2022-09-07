/* test that input character rntered instead of integer placed back into the input queue */
#include <stdio.h>
int main(void)
{
    double num[10];

    scanf(" %f",&num);
    for(int i = 0; i < 10; i++)
        printf("%f ",num[i]);
    
    return 0;
}
