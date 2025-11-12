#include <stdio.h>
#define max_size 20;
int main()
{
    int a[10];
    int size;
    int i;
    printf("enter the value of elements ,you want to insert in array:");
    scanf("%d", &size);
    printf("enter the %d elements of array:\n", size);
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("the elements in the array are:\n");
     for (i = 0; i < size; i++){
        printf("%d",a[i]);
     }
     return 0;
    
}