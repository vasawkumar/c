#include<stdio.h>
int main()
{
    char c;
    printf("enter any character:");
    scanf("%c",&c);
    int a=(int)c;
    printf("the character is %c ASCII value %d",c,a);
    return 0;
}