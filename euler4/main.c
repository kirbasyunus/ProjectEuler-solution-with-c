#include <stdio.h>
#include <stdlib.h>

int palindrome(int n);
int main()
{
    int c=101101, a=99, b=99;
    if(palindrome(c)==1)
        printf("78");
    else{
        printf("11");
    }



}
int palindrome(int a){
    int n,b=0,c=0,i;
    int array[10];
    n=a;
    //printf("is your number palindrome? : ");
    //scanf("%d",&n);
    for(i=0;n>0;i++){
        b=b+1;
        c=n%10;
        array[i]=c;
        n=n/10;
    }
    if(array[0]==array[5]&&array[1]==array[4]&&array[2]==array[3]){
               printf("%d\n",1);
                return 1;

    }
    else{
        printf("%d\n",0);

    }



}



