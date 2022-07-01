#include <stdio.h>
int main(){
    char name[10];
    float height;
    printf("Enter your name and height in centimeters:");
    scanf("%s %f",name,&height);
    printf("%s, you are %.3f meters tall",name,height / 100);

    return 0;
}