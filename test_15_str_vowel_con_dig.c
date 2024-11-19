#include <stdio.h>

int main()
{
    char str[1000], ch;
    int i, vow, con, dig, word, other;

    printf("Enter a string: ");
    gets(str);

    i = vow = con = dig = word = other = 0;
    while ((ch = str[i]) != '\0')
    {

        if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
        {
            vow++;
        }
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            con++;
        }
        else if(ch >= '0' && ch <= '9'){
            dig++;
        }
        else if(ch == ' '){
            word++;
        }
        else{
            other++;
        }

        i++;
    }
    word++;
    printf("Number of vow: %d\n",vow);
    printf("Number of con: %d\n",con);
    printf("Number of word: %d\n",word);
    printf("Number of digit: %d\n",dig);
    printf("Number of other / spciel cheracter: %d\n",other);

    return 0;
}