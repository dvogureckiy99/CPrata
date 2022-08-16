#include <stdio.h>
int main(void)
{
    const int lines = 4,columns = 8;
    for (int i = 0; i < lines; i++)
    {
        for (int j = 0; j <= columns; j++)
            printf("$");
    printf("\n");
    }
    return 0;
}