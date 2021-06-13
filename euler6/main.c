#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a=0,b,sum=0,x,i;
   for(i=1;i<101;i++){
     a=a+i*i;
     sum=sum+i;
   }
   x=sum*sum-a;
   printf("%d",x);
}
