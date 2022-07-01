#include <stdio.h>
int main(){
    char first[10];
    char last[10];
    scanf("%s %s",first,last);
    int len1,len2;
    len1 = strlen(first);
    len2 =strlen(last);
    printf("%s %s\n%*d %*d\n",first,last,len1,len1,len2,len2);
    printf("%s %s\n%-*d %-*d\n",first,last,len1,len1,len2,len2);

    return 0;
}