#include "stdio.h"
#define MIN_PER_HOUR 60
int main(void){
    int timem, timeh, timelm; // time in minutes, hours and last minutes
    printf("please enter time in minutes\nOr number less than 1"
        " if you want end with this:");
    scanf("%d",&timem);
    while(timem > 0)
    {
        timeh = timem / MIN_PER_HOUR;
        timelm = timem % MIN_PER_HOUR;
        printf("time equals %d hours and %d minutes.\n", timeh, timelm);
        printf("please enter time in minutes\nOr number less than 1"
            " if you want end with this:");
        scanf("%d",&timem);
    }

    return 0;
}