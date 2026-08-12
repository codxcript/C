#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter three int number: ");
    scanf("%d", &x);

    printf("\nfirst digit: %d\n", (x / 10) / 10);
    printf("\nmiddle digit: %d\n", (x / 10) % 10);
    printf("\nlast digit: %d\n", x % 10);

    return 0;
}