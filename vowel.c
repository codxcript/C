#include <stdio.h>
int main()
{
    char x;
    printf("Enter a letter: ");
    scanf("%c", &x);
    if ((x == 'a') || (x == 'A') || (x == 'e') || (x == 'E') || (x == 'i') || (x == 'I') || (x == 'o') || (x == 'O') || (x == 'u') || (x == 'U'))
        printf("\n'%c' is a vowel.", x);
    else
        printf("\n'%c' is a consonant.", x);
    return 0;
}