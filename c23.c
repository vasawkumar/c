#include <stdio.h>
int main()
{
    char c;
    printf("enter any character:");
    scanf("%c", &c);
    int a = (int)c;
    printf("the character %c ASCII value is %d", c, a);
    return 0;
}
