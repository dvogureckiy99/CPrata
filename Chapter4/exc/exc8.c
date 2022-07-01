#include <stdio.h>
int main(){
    float const km_per_mile = 1.609;
    float const liters_per_gallon = 3.785;
    float miles,gallons;
    printf("Please enter the number of miles traveled and the number of gallons of gasoline consumed:\n");
    scanf("%f %f",&miles,&gallons);
    printf("Miles-per-gallon value: %.1f\n",miles / gallons);
    printf("Litters-per-100-km value:%.1f\n", gallons*liters_per_gallon*100/(miles*km_per_mile) );

    return 0;
}