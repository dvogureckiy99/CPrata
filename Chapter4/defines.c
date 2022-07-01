// defines.c -- uses defined constants from limit.h and float.
#include <stdio.h>
#include <limits.h>
// integer limits
#include <float.h>
// floating-point limits

int main(void)
{
    printf("Some number limits for this system:\n");
    printf("Biggest int: %d\n", INT_MAX);
    printf("Smallest long long: %lld\n", LLONG_MIN);
    printf("One byte = %d bits on this system.\n", CHAR_BIT);
    printf("Largest double: %e\n", DBL_MAX);
    printf("Smallest normal float: %e\n", FLT_MIN);
    printf("float precision = %d digits\n", FLT_DIG);
    printf("float epsilon = %e\n", FLT_EPSILON);

    #define SYMB_NUM 15
    char a[SYMB_NUM] = "Hellow it's me!";
    char symb_num[4];
    sprintf(symb_num,"%d",SYMB_NUM);
    char conv_spec[8] = "";
    strcat(conv_spec,"%.");
    strcat(conv_spec,symb_num);
    strcat(conv_spec,"s\n");
    printf(conv_spec,a);
    
    return 0;
}