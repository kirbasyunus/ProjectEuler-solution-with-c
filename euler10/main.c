#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int PrimeNumber(int n);
int main(){
    unsigned long long int a, sum=2, i;
    for(i=3;i<2000000;i+=2){
        if(PrimeNumber(i)==1){
            sum=sum+i;
        }
    }
printf("%llu",sum);
    }
int PrimeNumber( int n){

    int i=3,x;
    x=sqrt(n);
    for(i=3;i<n+4;i+=2){
        if( n==1 || n==2 || n==3 ){
        return 1;//("your number is prime number!");
        break;
        }
        else if(n%2==0){
        return 0;       //("your number is not prime number!");
        break;
        }

        else if(n%i==0){
        return 0;     //("your number is not prime number!");
        break;
        }
        else if(i>x){
        return 1;  //("your number is prime number!");
        break;
        }
}

}
