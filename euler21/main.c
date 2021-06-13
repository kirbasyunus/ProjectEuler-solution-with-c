#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, i, count=0, k, sum=0,j, x;
    for(i=0;i<10000;i++){
            k=i;
            for(a=1;a<3;a++){
                b=count;
                count=0;
                for(j=1;j<i/2+1;j++){
                if(i%j==0)
                   count+=j;
            }
                i=count;
                x=i;
            }
            if(b!=i && k==count){
               sum+=i;
               sum+=b;
               if(b>10000)
               sum+=(i+b);
           }
        i=k;
    }
    printf("%d\n",sum/2);
}
