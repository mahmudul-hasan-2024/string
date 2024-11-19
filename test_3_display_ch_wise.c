#include <stdio.h>

int main(){
    char s1[]="Rahat";

    // int i=0;
    // while(s1[i] != '\0'){
    //     printf("%c\n",s1[i]);
    //     i++;
    // }

    for(int i = 0; s1[i] != '\0'; i++){
        printf("%c\n",s1[i]);
    }
    return 0;
}