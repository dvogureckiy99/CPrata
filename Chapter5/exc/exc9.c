#include "stdio.h"

void Temperatures(double temp){
    const float Cels_k = 5.0 / 9.0;
    float const Cels_c = -32.0;
    float const Kelvin = 273.16;
    double temp_c;
    temp_c =  Cels_k * (temp + Cels_c);
    printf("Celsium:%.2lf\n",temp_c);
    printf("Kelvin:%.2lf\n",temp_c + Kelvin);
}

int main(){
    double temp_f;
    printf("enter a Fahrenheit temperature (or any symbol for exit):");    
    int status;
    status = scanf("%lf",&temp_f);
    while(status == 1){
        Temperatures(temp_f);
        printf("enter a Fahrenheit temperature (or any symbol for exit):");    
        status = scanf("%lf",&temp_f);    
    }
    printf("End\n");

    return 0;

}