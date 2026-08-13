#include <stdio.h>
int main()
{
    int x, y = 0;
    int z;
    printf("Enter a number: ");
    scanf("%d", &z);
    for (int i = 1; i <= z; i += 1)
    {
        if (i % 2 == 0)
            y++;
    }
    printf("\ntotal even number of( 1 to %d )is:  %d\n", z, y);

    return 0;
}