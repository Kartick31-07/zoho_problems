#include<stdio.h>

void main()
{
    int n=5;

    for(int i=1;i<2*n;i++)
    {
        int count=0;

        for(int j=1;j<2*n;j++)
        {
            if(i<=n)
            {
                if(j>n-i && j<n+i)
                {
                    if(j<=n)
                    {
                        printf("%d",++count);
                    }
                    else
                    {
                        printf("%d",--count);

                    }
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j>i-n && j<3*n-i)
                {
                    if(j<=n)
                    {
                        printf("%d",++count);
                    }
                    else
                    {
                        printf("%d",--count);
                    }
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