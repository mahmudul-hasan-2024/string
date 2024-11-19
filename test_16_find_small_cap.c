#include <stdio.h>

int main(){
    char str[1000],ch;
    int i, cap, small, dig;
    i=cap=small=dig=0;

    printf("Enter a strint: ");
    gets(str);

    while((ch = str[i]) !='\0'){

        if(ch >= 'A' && ch <= 'Z'){
            cap++;
        }else if(ch >= 'a' && ch <= 'z'){
            small++;
        }else if(ch >= '0' && ch <= '9'){
            dig++;
        }
        i++;
    }

    printf("Num of capital letter = %s\n",cap);
    printf("Num of small letter = %s\n",small);
    printf("Num of digit = %s\n",dig);
    // printf("Num of spaciel ch = %s\n",sp);
    return 0;
}