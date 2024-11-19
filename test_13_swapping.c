#include <stdio.h>

int main(){
    char s1[15] ="Mahmudul";
    char s2[15] ="Hasan";
    char temp[15];

    printf("Before swapping\n");
    printf("Str 1 = %s\n",s1);
    printf("Str 2 = %s\n\n",s2);
    // printf("Temp = %s\n",temp);

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("After swappin\n");
    printf("Str 1 = %s\n",s1);
    printf("Str 2 = %s\n",s2);
    printf("Temp = %s\n",temp);
    return 0;
}