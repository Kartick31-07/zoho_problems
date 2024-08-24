#include<stdio.h>

void main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=3;
    int t=0,b=n-1,l=0,r=n-1;

    while(t<b && l<r)
        {
            int temp1=a[t][l];

            for(int i=l;i<r;i++)
            {
                a[l][i]=a[l][i+1];
            }
            // t++;
            for(int j=t;j<b;j++)
            {
                a[j][r]=a[j+1][r];
            }
            for(int i=r;i>l;i--)
            {
                a[b][i]=a[b][i-1];
            }
            for(int k=b;k>t+1;k--)
            {
                a[k][l]=a[k-1][l];
            }
            a[t+1][l]=temp1;
            t++,l++,r--,b--;
        }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
}
}