#include <stdio.h>
int sum(int a, int b);
int mul(int c, int d);
float div(float e, float f);
int sub(int g, int h);
int mod(int i, int j);
int main()
{
    int x, y, z;
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    int summ = sum(x, y);
    int multi = mul(x, y);
    float divi = div(x, y);
    int subs = sub(x, y);
    int modu = mod(x, y);
    printf("\nsummation= %d\n", summ);
    printf("multiply=  %d\n", multi);
    printf("division=  %.3f\n", divi);
    printf("substraction= %d\n", subs);
    printf("modulus=   %d\n", modu);
    return 0;
}
int sum(int a, int b)
{
    int su = a + b;
    return su;
}
int mul(int c, int d)
{
    int mu = c * d;
    return mu;
}
float div(float e, float f)
{
    float di;
    if (e >= f)
    {
        di = e / f;
    }
    else
    {
        di = f / e;
    }
    return di;
}
int sub(int g, int h)
{
    int s;
    if (g >= h)
    {
        s = g - h;
    }
    else
    {
        s = h - g;
    }
    return s;
}
int mod(int i, int j)
{
    int mo;
    if (i >= j)
    {
        mo = i % j;
    }
    else
    {
        mo = j % i;
    }
    return mo;
}
