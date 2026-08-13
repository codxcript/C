#include <stdio.h>
int main()
{
    int x;
    printf("enter password: ");
    scanf("%d", &x);
    if (x == 1234)
    {
        printf("\nlogin successful");
    }
    else
    {
        printf("\npassword incorrect");
    }
    return 0;
}