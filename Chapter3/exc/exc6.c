#include <stdio.h>
int main(void){
    int quarts;
    printf("amount of water in quarts:");
    scanf("%d",&quarts);
    printf("number of water molecules:%E",quarts * 950.0 / 3e-23);

    return 0; 
}