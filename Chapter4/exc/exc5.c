#include <stdio.h>
int main(){
    float Mbs,MB;
    printf("Enter download speed in megabits per second (Mbs), size of the file in megabytes (MB):\n");
    scanf("%f %f",&Mbs,&MB);
    printf("At %.2f megabits per second,a file of %.2f megabytes downloads in %.2f seconds.\n",
        Mbs,MB,MB*8/Mbs);

    return 0;
}