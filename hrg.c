#include<stdio.h>

void main()
{
    int n=5;

    for(int i=1;i<2*n;i++)
    {
        for(int j=1;j<2*n;j++)
        {
            if(i<=n)
            {
                if(j>=i && j<=2*n-i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j>=2*n-i && j<=i)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}