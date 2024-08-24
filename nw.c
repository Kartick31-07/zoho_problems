#include<stdio.h>

void main()
{
    int n=9;
    int count=1;

    for(int i=1;i<=n/3;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j==i||j==n/2-i+2||j==n/2+i||j==n-i+1)
            {
                printf("%d",j);
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}