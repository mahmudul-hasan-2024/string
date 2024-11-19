#include <stdio.h>

int main(){
    char s1[100]="Mahmudul Hasan.";
    char s2[100];

    strcpy(s2,s1);

    printf("S1 = MH = %s\n",s1);
    printf("S2 = MH = %s",s2);
    return 0;
}