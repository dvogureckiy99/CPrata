#include <stdio.h>
int main(void){
    printf("Your age:");
    int val;
    scanf("%d",&val);
    printf("Your age in seconds:%e\n",val*3.156e7);
    return 0;
}