#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned long long int count=1,counter=4;
    long double a=2, b=3, c;
    while(count<1000){
        count=1;
        c=a+b;
        a=b;
        b=c;
        counter++;
        while(c>10){
            c=c/10;
            count++;
        }
    }
    printf("sonuc %d\n",counter);
    }


