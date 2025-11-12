// program to insert value of array//
#include <stdio.h>
#define max_size 100;
int main()
{
    int a[10];
    int size;
    int i;
    int n;
    int pos;
    printf("Enter the value of elements ,you want to insert in array:");
    scanf("%d", &size);
    printf("Enter the element:");
    scanf("%d", &n);
    printf("Enter the position:");
    scanf("%d", &pos);
    if (pos > size || pos <= 0)
    {
        printf("Invalid position");
    }
    else
        for (i = size; i >= pos; i--)
        {
            a[i] = a[i - 1];
        }
    printf("Enter the %d elements of array:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("The elements in the array are:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d", a[i]);
    }
    return 0;
}
