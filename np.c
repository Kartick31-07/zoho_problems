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
                    printf("%d ", n-i+1);
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if(j<=i && j>=2*n-i)
                {
                    printf("%d ",i-n+1);
                }
                else
                {
                    printf("  ");
                }
            }

        }

        printf("\n");
    }
}