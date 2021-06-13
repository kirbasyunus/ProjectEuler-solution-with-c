#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int i=1, a=0, counter=1, count=1, sum=1, x=1, b;
    while(count<501){
        a+=8;
        x+=a;
        sum+=x;
        b=x;
        for(i=1;i<4;i++){
            x=x-counter-1;
            sum+=x;
        }
        x=b;
        count++;
        counter+=2;
    }
     printf("%llu",sum);
    }
