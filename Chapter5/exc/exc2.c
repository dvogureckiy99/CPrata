#include "stdio.h"
int main(void)
{
    int num;
    printf("Enter number:");
    scanf("%d",&num);
    const int cnum = num + 11;
    while(num < cnum ){
        printf("%d\t",num);
        num++;
    }
    printf("\n");
    return 0;
}