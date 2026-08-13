#include <stdio.h>
int main()
{
    int x = 0, y;
    printf("enter a number:  ");
    scanf("%d", &y);
    for (int i = 1; i <= y; i += 1)
    {
        x = i + x;
    }
    printf("Summation of( 1 to %d )numbers is: %d\n", y, x);

    return 0;
}