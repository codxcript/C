#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a == b)
        printf("They are equal.");
    if (a > b)
        printf("\n%d is greater than %d", a, b);
    if (a < b)
        printf("\n%d is less than %d", a, b);
    return 0;
}