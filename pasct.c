#include<stdio.h>

void pasct(int n)
{
    int a[5][5]={0};
    a[0][0]=1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(j>=n-i-1)
            {
            if(j==n-i-1||j==n)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i-1][j+1];
            }
            
            printf("%d ",a[i][j]);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}
void main()
{
    int n=5;

    pasct(n);
}