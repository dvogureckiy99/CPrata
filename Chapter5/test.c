/* divide.c -- divisions we have known */
#include <stdio.h>
int main(void)
{
    // int a = 1, b = 4;
    // int c =0;
    // c = a*b++ ;
    // printf("c = %d, a = %d, b = %d\n",c,a ,b);
    // int num = 5 ;
    // printf("%10d %10d\n", num, num*num++);
    // float ans = 0;
    // int num = 4 ;
    // ans = num/2 + 5*(1 + num++);
    // printf("%f\n",ans);
    // int n ,y ;
    // n = 3;
    // y = n++ + n++;
    // printf("%d\n",y);
    int x=1, y;
    y = (4 + x++) + (6 + x++);
    printf("x = %d, y = %d",x,y);

    return 0;
}