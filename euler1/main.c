#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,sum=0,i;
    int array[1000];
    for(i=2;i<1000;i++){
        if(i%5==0){
            array[a]=i ;
            a++;
            continue;
        }
        if(i%3==0){
            array[a]=i ;
            a++;
    }
    }
    for(i=0;i<a;i++){;
        sum=sum+array[i];
    }
    printf("%d",sum);
    return 0;
}

