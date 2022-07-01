#include "stdio.h"
#define DAYS_PER_WEEK 7
int main(void)
{
    int days,weeks,ldays;
    printf("Enter number of days (or value less than 1 if you want to end):");
    scanf("%d",&days);
    while(days > 0){
        weeks = days / DAYS_PER_WEEK ;
        ldays = days % DAYS_PER_WEEK ;
        printf("%d days are %d weeks, %d days.\n",days,weeks,ldays);
        printf("Enter number of days (or value less than 1 if you want to end):");
        scanf("%d",&days); 
    }

    return 0;
}