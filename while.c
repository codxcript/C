#include <stdio.h>
int main()
{
    int x;
    printf("enter a number: ");
    scanf("%d", &x);
    while (x != 0)
    {
        printf("You entered: %d\n", x);
        scanf("%d", &x);
    }
    return 0;
}