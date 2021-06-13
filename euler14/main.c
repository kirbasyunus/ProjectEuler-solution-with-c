#include <stdio.h>
#include <stdlib.h>
int Collatz(unsigned long long int n);
int main(){
    unsigned long long int x, i, max=1,k=1;
    for(i=2;i<1000000;i++){
        x=Collatz(i);
        if(x>max){
            max = x;
            k=i;
        }
    }

    printf("%llu to %llu\n",k,max);
}

int Collatz(unsigned long long int n){

    int count=1;
    while(n>1){
        if(n%2==0){
            n=n/2;
            count++;
        }
        else{
            n=3*n+1;
            count++;

        }

//printf("%d\n",count);
    }
    //printf("\n\n");
    return count;
}
