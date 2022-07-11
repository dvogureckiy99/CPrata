/* for_wild.c */
#include <stdio.h>
int main(void)
{
    for (int x = 1,y = 55; y <= 75; y = (++x * 5) + 50)
    printf("%10d %10d\n", x, y);

    return 0;
}