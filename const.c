#include <stdio.h>
int main()
{
    const char NAME = 'A';
    const int HEIGHT = 8;
    const float PI = 3.1416;
    const char letterSeq[5] = "ABC";
    printf("\nvalue of name: %c\n", NAME);
    printf("\nvalue of height: %d\n", HEIGHT);
    printf("\nvalue of pi: %f\n", PI);
    printf("\nvalue of letter sequence: %s\n", letterSeq);
    return 0;
}