#include <stdio.h>
int main()
{
    char c;
    int age;
    printf("enter char 'I' or 'i' if you are Indian:");
    scanf("%c",&c);
    if(c=='I' || c=='i')
    
    {
        printf("great ! enter your age:");
        scanf("%d",&age);
        if(age>=18)
        {
            printf("you are eligible to vote");
        }
        else

        {
    
        
            printf("you are not eligible to vote");
        }
    }
    else
    {
        printf("you are not Indian");
    }
    return 0;
}