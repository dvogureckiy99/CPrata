#include <stdio.h>
int main(){
    char name[10];
    printf("Please enter your first name:");
    scanf("%s",name);

    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
    printf("%*s\n",strlen(name)+3,name);

    return 0;
}