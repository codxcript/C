#include <stdio.h>
int main()
{
    int x, y, z;
    printf("Enter Three integer number: ");
    scanf("%d%d%d", &x, &y, &z);
    if ((x > y) && (x > z))
        printf("\n%d isthe largest number", x);
    else if ((y > x) && (y > z))
        printf("\n%d is the largest number", y);
    else
        printf("\n%d is the largest number", z);
    return 0;
}