#include<stdio.h>

void main()
{
    int n=19;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(i<=n/2)
            {
            if(i>=j||j>=n-i+1)
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
                if(j>=i||j<=n-i+1)
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