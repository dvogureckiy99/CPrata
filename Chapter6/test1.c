/* test that input character rntered instead of integer placed back into the input queue */
#include <stdio.h>
int main(void)
{
    long num = 10;
    long sum = 0L;     /* initialize sum to zero    */
    int status;

    printf("Please enter an integer to be summed ");
    printf(" (q to quit): ");
    status = scanf("%ld", &num);
    char nmae;
    scanf(" %c",&nmae);
    printf("Those %c integers sum to %ld.\n",nmae, num);

    return 0;
}