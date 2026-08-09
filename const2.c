#include <stdio.h>
int main()
{
    const char name[5] = "asif";
    const char grade = 'A';
    const char grade_point[3] = "A+";
    const int class = 7;
    const int temp = -30;
    const float pi = 3.1416;
    const char description[100] = "\nHi, my name is Asif.\nI read in class 7.\nThe grade point I obtained :A+";
    printf("\nValue of name: %s", name);
    printf("\nValue of grade: %c", grade);
    printf("\nValue of grade_point: %s", grade_point);
    printf("\nValue of class: %u", class);
    printf("\nValue of temp: %d", temp);
    printf("\nValue of pi: %.4f", pi);
    printf("\nValue of description: %s", description);
    return 0;
}