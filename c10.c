#include <stdio.h>
#include <math.h>
 int main (){
 int a,b;
   printf ("enter a:");
   scanf("%d",&a);
   printf("enter b:");
   scanf("%d",&b);
     int modulo = a%b; 
     printf("%d",modulo);
          return 0;
//modulo gives remainder
 }