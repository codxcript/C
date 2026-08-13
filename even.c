#include <stdio.h>
int main()
{
    int x;
    printf("enter a number:");
    scanf("%d", &x);
    for (int i = 1; i <= 10; i += 1)
    {
        if (i % 2 == 0)
            printf("%d\n", i);
    }
    return 0;
}