#include <stdio.h>
#include <stdlib.h>

int PrimeNumber(int n);
int main()
{
    int i,a=1,mul=1;
    for(i=2;i<20;i++){
        if(PrimeNumber(i)==1){
        while(a<20){
            a=a*i;
            if(a>20){
            a=a/i;
            break;
            }

        }
        mul=mul*a;
        a=1;


        }

    }
    printf("%d\n",mul);
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
