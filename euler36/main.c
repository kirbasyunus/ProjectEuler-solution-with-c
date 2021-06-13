#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=585, i=0, sum, c, k=0;
    int number[999];
    while(n>0){
        c=n%2;
        n=n/2;
        //printf("%d",c);

        number[k]=c;
        k++;
    }
    if(k%2==0){
        for(i=0;i<k/2;--i){
            if(number[i]==number[k])

            else;
                break;
        }
    }
    else{
        for(i=0;i<k/2-1;--i){
            if(number[i]==number[k])

            else{
                break;
            }

        }
    }

}
