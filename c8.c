#include <stdio.h>
int main()
{
    float pi = 3.14;
    float r;
    
    printf("enter r :");
    scanf("%f", &r);
    printf("area of circle:%f", pi * r * r);
    return 0;
}