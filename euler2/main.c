#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=2,b=3,c=0,sum=2;
    while(4000000>c){
        if(b%2==0)
            sum=sum+b;
        c=a+b;
        a=b;
        b=c;
    }
    printf("%d",sum);
    return 0;
}
