#include <stdio.h>
int main()
{
    int x = 0, y = 0, z = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        x = x + i;
        if (i % 2 == 0)
        {
            y = y + 1;
        }
        else
        {
            z = z + 1;
        }
        printf("%d- sum:%d  even:%d  odd:%d\n", i, x, y, z);
    }
    printf("\n\nTotal sum=  %d\n", x);
    printf("Total even= %d\n", y);
    printf("Total odd=  %d\n", z);

    return 0;
}
