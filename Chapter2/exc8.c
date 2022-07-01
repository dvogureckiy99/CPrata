#include <stdio.h>

void three(){
    printf("three\n");
}

void two(){
    printf("two\n");
    three();
}

void one_three(){
    printf("one\n");
    two();
}

int main(){
    one_three();
}