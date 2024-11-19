#include <stdio.h>

int main(){
    //char s1[100]="Mahmudul Hasan";
    char s1[100]="MADAM";
    // char s1[100]="madam";
    char s2[100];

    int i=0,len=0,j;
    while(s1[i]!='\0'){
        i++;
        len++;
    }
    for(j=0,i=len-1; i>=0; i--,j++){
        s2[j] = s1[i];
    }
    s2[j]='\0';

    printf("Str 1 = %s\n",s1);
    printf("Str 2 = %s\n",s2);

    int c= strcmp(s1,s2);
    if(c==0){
        printf("Str is palindrom");
    }else{
        printf("Str is not palindrom");
    }
    return 0;
}