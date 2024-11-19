#include <stdio.h>

int main(){
    char s1[100]="Mahmudul Hasan ";
    char s2[100]="Rahat";

    int i=0, len=0, j=0;
    while(s1[i] != '\0'){
        i++;
        len++;
    }
    while(s2[j] != '\0'){
        s1[len+j]=s2[j];
        j++;
    }
    printf("S1 = %s\n",s1);
    printf("S2 = %s\n",s2);
    return 0;
}