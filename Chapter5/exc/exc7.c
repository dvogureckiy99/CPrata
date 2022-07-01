#include "stdio.h"

double cubed(double n){return n*n*n;}

int main(){
    double num;
    printf("Enter number:");
    scanf("%lf",&num);
    printf("Resulting number:%lf",cubed(num));
    return 0;

}