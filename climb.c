#include<stdio.h>

int main()
{

    int n=10,n0=1,n1=1,n2;

    for(int i=1;i<n;i++)
    {

        if(n==0 || n==1){

            return n;
        }
        else{

            n2=n1+n0;
            n0=n1;
            n1=n2;                
        }
    }
    printf("%d",n2);
}