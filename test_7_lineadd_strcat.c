#include <stdio.h>

int main(){
    char s1[]="Mahmudul Hasan ";
    char s2[]="Rahat";

    strcat(s1,s2);
    printf("s1 = %s\n",s1);
    printf("s1 = %s\n",s2);
    return 0;
}