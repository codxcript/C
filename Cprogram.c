#include <stdio.h>
int main()
{
int a,b,c,sum;
float avg;
printf("Enter Three Integer Number :");
scanf("%d%d%d",&a,&b,&c);
sum=a+b+c;
avg= (float)sum/3;
printf("The Summation of Three Number is =%d",sum);
printf("\nThe Average of Three Number is =%.3f",avg);
return 0;
}
