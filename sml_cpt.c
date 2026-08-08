#include <stdio.h>
int main(int argc, char const *argv[])
{
    char ch;
    printf("Enter a Character : ");
    scanf("%c", &ch);
    if ((ch >= 'A') && (ch <= 'Z'))
        printf("\nYOU ENTERED A CAPITAL LETTER :%c", ch);
    else if ((ch >= 'a') && (ch <= 'z'))
        printf("\nyou entered a small letter :%c", ch);
    else
        printf("\nThe letter you entered is not a character .");
    return 0;
}
