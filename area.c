#include <stdio.h>
float pi = 3.1416;
int main()
{
    float radius, area;
    printf("Enter radius of the circle(in cm): ");
    scanf("%f", &radius);
    area = (pi) * (radius * radius);
    printf("\nArea of the circle is: %.4f square cm", area);
    return 0;
}