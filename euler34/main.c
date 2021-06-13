#include <stdio.h>
#include <stdlib.h>

int factorials(int n);
int main(){
    int i, sum=0, b=1, c=1,count=0;
    for(i=3;i<20000000;i++){
        b=i;
        while(i>0){
            c=i%10;
            sum+=factorials(c);
            i=i-c;
            i=i/10;
        }
        i=b;
        if(i==sum){
           printf("%d\n\n",i);
           count+=i;
           }
        sum=0;
    }
printf("%d\n",count);
}
int factorials(int n){
    int a=1, b=1, c;
    for(a=1;a<n+1;a++){
        b=b*a;
    }
    return b;
}
