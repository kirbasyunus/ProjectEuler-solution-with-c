#include <stdio.h>
#include <stdlib.h>

int PythagoreanTriplet(int a,int b,int c);
int main()
{
    int x=333, y=333, z=334, m=0;
    for(m=1;m<4;m++){
    z=z+m;
    y=y-m;
    x=333;
    while(x>z-y){
    z=z+1;
    x=x-1;
    if(PythagoreanTriplet(x,y,z)==1){
        printf("14444444444\n\n\n");
    break;
    }
}
    y=333;
    z=334;
}
}
int PythagoreanTriplet(int a,int b,int c){

    c=c*c;
    a=a*a;
    b=b*b;
    printf("a %d\n",a);
    printf("b %d\n",b);
    printf("c %d\n",c);
    if(c==a+b){
       // printf("%d\n",a);
        return 1;
    }

    else{
        return 0;
    }


}
