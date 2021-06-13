#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0, counter=0, i=1, k=1;
    while(counter<501){
        sum=sum+k;
        for(i=1;i<sum+1;i++){
            if(sum%i==0)
                counter++;

        }
        if(counter<500){
            counter=0;
        }
        k++;
printf("%d\n",sum);
    }
    printf("%d\n%d",sum,counter);
}
