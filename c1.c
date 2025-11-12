#include <stdio.h>
int main(){
    int num;
    printf("enter any num:");
    scanf("%d",&num);

    printf(num>0 ? "postive\n":"negative\n");
    printf(num==0?" zero\n":"notzero\n");
    printf(num%2==0? "Even\n":"Odd\n");
    return 0;


}