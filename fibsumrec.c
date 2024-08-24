#include<stdio.h>
void result(int a[100],int idx,int n)
{
    int res[100],idx2=0;
    for(int i=idx-1;i>0;i--)
    {
        if(a[i]<=n)
        {
            n-=a[i];
            res[idx2++]=a[i];
        }
    }
    for(int j=0;j<idx2;j++)
    {
        printf("%d ",res[j]);
    }
}

int fib(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else
    {
        return fib(n-1)+fib(n-2);
    }
}

void fibArr(int n)
{
    int i=0,a[100];
    while(1)
    {
        int val=fib(i);
        if(val<=n)
        {
            a[i++]=val;
        }
        else
        {
            break;
        }
    
    }
    result(a,i,n);
   
    
}
void main()
{
    int n;
    printf("enter the num ");
    scanf("%d",&n);
    
    fibArr(n);
}