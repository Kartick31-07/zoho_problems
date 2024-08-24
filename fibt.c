#include<stdio.h>

void fibt(int n)
{
    for(int i=0;i<n;i++)
    {
        int n0=0,n1=1,n2;
        printf("%d",n1);

        for(int j=0;j<i;j++)
        {
            n2=n0+n1;
            n0=n1;
            n1=n2;
            printf("%d",n2);
        }
        
        printf("\n");
    }
}
void main()
{
    int n=5;

    fibt(n);
}