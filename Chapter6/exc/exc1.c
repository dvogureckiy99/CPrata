#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char str[26];
    printf("RAND_MAX=%d\n",RAND_MAX);
    for (int i = 0; i < 26; i++)
    {
        char num = 97 + (int)((float) random()* 26/RAND_MAX) ;
        str[i]=num;
        printf("%c ",str[i]);
        if(!(i%10) && i != 0) printf("\n");
    }
    printf("\n");
    return 0;
}