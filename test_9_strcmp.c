#include <stdio.h>

int main(){
    char s1[]="Mahmudul Hasan";
    char s2[]="Rahat";

    int b = strcmp(s1,s2);

    if(b==0){
        printf("String are equale");
    }else{
        printf("String are non equale");
    }

    return 0;
}