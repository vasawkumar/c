#include <stdio.h>
int main()
{
    char c;
    printf("enter any char:");
    scanf("%c",&c);
    if(c=='A'||c=='a'||c=='I'||c=='i'||c=='O'||c=='o'||c=='U'||c=='u'||c=='A'||c=='a'||c=='E'||c=='e')
    {
        printf("vowels");
    }
    else
    {
        printf("constant");
    }
    
    return 0;
}