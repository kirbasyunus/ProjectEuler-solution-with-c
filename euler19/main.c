#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i, j, count=0;
    int num[12]={31,28,31,30,31,30,31,31,30,31,30,31};//ilk 10 0, one
    int numa[12]={31,29,31,30,31,30,31,31,30,31,30,31};//n%4==0
    for(j=1901;j<2001;j++){
        if(j%4==0){
        for(i=0;i<12;i++){
        n+=numa[i];
            //printf("%d\n",n);

        if(n%7==4){
            count++;
            //printf("%d to %d",i+2,count);
        }
    }
    }
        else{
            for(i=0;i<12;i++){
        n+=num[i];
           // printf("%d\n",n);

        if(n%7==4){
            count++;
            //printf("%d to %d",i+2,count);
        }

    }
    }
        }
        printf("%d",count);
    }


