#include<stdio.h>

int fact(int n)
{
    int c=1;
    for(int i=1;i<=n;i++){

        c=c*i;
    }
    // printf("%d\n",c);
    return c;
}
void main()
{

    int n=145,r=0;
    int t=n;

    while(n>0){

        int m=n%10;
        r+=fact(m);
        n/=10;
    }
    // printf("%d",r);
    if(r==t){
        printf("strong");
    }
    else{

        printf("not strong");
    }
}