#include <stdio.h>
int main()
{
    int a;
    printf("enter a:");
    scanf("%d", &a);
    float b = (float)a;

    printf(" the float value %d is %.2f", a,b);

    return 0;
}