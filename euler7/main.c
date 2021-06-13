#include <stdio.h>
#include <stdlib.h>

int PrimeNumber(int n);
int main()
{
    int i=2, counter=1;

    while(counter<10001){
        i++;
        if(PrimeNumber(i)==1){
            counter++;
        }
    }
      printf("%d",i);
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
