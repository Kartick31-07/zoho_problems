#include<stdio.h>

void main()
{
    int n=5;
    for(int i=1;i<=2*n;i++)
    {
        int count=0;
        for(int j=1;j<=2*n;j++)
        {
            if(i<=n)
            {
                if(j<=i)
                {
                    printf("%d",++count);
                }
                else if(j>2*n-i)
                {
                    printf("%d",count--);
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j<2*n-i+1)
                {
                    printf("%d",++count);
                }
                else if(j>i)
                {
                    printf("%d",count--);
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