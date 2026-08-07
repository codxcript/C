#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c, sum;
    float avg;
    printf("enter three integer number :");
    scanf("%d%d%d", &a, &b, &c);
    sum = a + b + c;
    avg = (float)sum / 3;
    printf("the avg of three num is =%d", sum);
    printf("\nthe avg of three num is =%.8f", avg);
    return 0;
}
