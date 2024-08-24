#include<stdio.h>

void main()
{
    int n=5;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=4*n;j++)
        {
            if(j==i||j==2*n-i||j==2*n+i-2||j==4*n-i-2)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
}