#include<stdio.h>

void main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        int count=1;

        for(int j=1;j<=n;j++)
        {
            if(j>n-i)
            {
                if(j==n-i+1||j==n||i==n)
                {
                    printf("%d ",count);
                }
                else
                {
                    printf("  ");
                }
                count++;
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}