#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int PrimeNumber(int n);
int main(){
    unsigned long long int x=600851475143, c=0, i, a;
    //int array[x];

    if(x%2==0){
        c+=1;
        printf("%llu ",2);
    }
    while(x%2==0){
        x=x/2;
        //array[0]=2;



    }

    for(i=3;i<x+1;i+=2){
        int m = PrimeNumber(i);
        a=i;

        if(m==1){
        while(x%i==0){
            if(x%i==0){
               if(a==i){
                  //array[c]=i;
                  printf("%llu ",i);
                  a=a+1;
                   c+=1;
               }

                x=x/i;
            }
    }

    }
    }
    //for(i=0;i<c;i++){
    //  printf("%llu ",array[i]);
  // }

    }
int PrimeNumber( int n){


    int i=3,x;
    //printf("is the number you entered prime?: ");
   // scanf("%d",&n);
    //double x;
    x=sqrt(n);
    //printf("%d",x);

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
