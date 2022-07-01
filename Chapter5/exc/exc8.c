#include "stdio.h"

double cubed(double n){return n*n*n;}

int main(){
    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand:");
    int second;
    int first = 1;
    scanf("%d",&second);
    printf("Now enter number for first operand: ");
    scanf("%d",&first);
    while(first != 0){
        printf("%d %% %d is %d\n",first,second,first%second);
        printf("Enter next number for first operand (<= 0 to quit): ");
        scanf("%d",&first);
    }

    printf("Done");
    return 0;

}