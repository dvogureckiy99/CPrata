#include <stdio.h>
int main(){
    float val;
    scanf("%f",&val);
    printf("The input is %.2f or %.1e.\n",val,val);
    printf("The input is %+.3f or %.3E.\n",val,val);

    return 0;
}