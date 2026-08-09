#include <stdio.h>
int main()
{
    int a, b, x;
    printf("Enter a and b value: ");
    scanf("%d%d", &a, &b);
    x = a * a + 2 * a * b + b * b;
    printf("\nvalue of (a+b)^2 is=  %d", x);
    return 0;
}