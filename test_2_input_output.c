#include <stdio.h>

int main(){
    char s1[100];

    printf("Enter your full name: ");
    gets(s1);

    printf("Full name: %s",s1);
    return 0;
}