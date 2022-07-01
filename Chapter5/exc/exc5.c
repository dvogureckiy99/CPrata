#include <stdio.h>
 int main(void) /* finds sum of first 20 integers */
 {
    int count, sum; /* declaration statement */
    count = 0; /* assignment statement */
    sum = 0; /* ditto */
    int days; 
    printf("Enter days in wich you prefer get money:");
    scanf("%d",&days);
    while (count++ < days) /* while */
        sum = sum + count; /* statement */
    printf("sum = %d\n", sum);/* function statement */
    return 0; /* return statement */ 
}