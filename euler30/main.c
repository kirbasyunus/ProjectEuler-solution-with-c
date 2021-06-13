#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i=0, a, b=11, sum, count, x, m, sumt=0;
    while(b<15000000){
            a=b;
        while(b>0){
            m=b%10;
            x+=pow(m,5);
            b=b-b%10;
            b=b/10;
        }
        if(x==a){
            sumt+=a;
            i++;
        }
        x=0;
        b=a;
        b++;
    }
    printf("%d",sumt);
    }



