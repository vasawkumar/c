#include <stdio.h>
#include <math.h>
int main()
{
    int x, y, z;
    
    printf("enter two integers:\n");
    scanf("%d %d", &x, &y);
    z = x + y;
    printf("sum of %d and %d is %d", x, y, z);
    return 0;
}