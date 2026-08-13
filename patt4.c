#include <stdio.h>
int main()
{
    int i, j, k = 1, n;
    printf("enter triangle height(in digit): ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= k; j++)
        {
            printf("* ");
        }
        k = (i * 2) + 1;
        printf("\n");
    }

    return 0;
}
