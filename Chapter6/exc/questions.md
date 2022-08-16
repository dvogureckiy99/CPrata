1. Find the value of quack after each line; each of the final five statements uses the value of
quack produced by the preceding statement.

7,70,64,8,2

2. Given that value is an int , what output would the following loop produce?  
for ( value = 36; value > 0; value /= 2)  
printf("%3d", value); 

 36 18  9  4  2  1    

What problems would there be if value were double instead of int ?  

loop would never end in there.

3. Represent each of the following test conditions:

a. x > 5  
b. scanf("%lf",&x) != 1
c. x == 5

4. Represent each of the following test conditions:

a. scanf("%d",&num)
b. x != 5
c. x >= 20

5.

#include <stdio.h>
int main(void)
{
    int i, j, list[10];
    for (i = 0; i < 10; i++)
    {
        list[i] = 2*i + 3;
        for (j = 0; j <= i; j++)
            printf(" %d", list[j]);
    printf("\n");
    }
    return 0;
}

6.

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

7.

