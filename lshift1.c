#include<stdio.h>

int r=1,col=1;
void main()

{
    int a[4][4]={{1,2,3,9},{4,5,6,0},{7,8,9,3},{4,5,2,1}};
    int c[4][4],n=4;

    for(int i=0;i<n-1;i++)
    {
        c[0][i]=a[0][i+1];
    }
    for(int j=n-1;j>=1;j--)
    {
        c[j][0]=a[j-1][0];
    }
    for(int i=n-1;i>=1;i--)
    {
        c[n-1][i]=a[n-1][i-1];
    }
    for(int k=0;k<n-1;k++)
    {
        c[k][n-1]=a[k+1][n-1];
    }
   for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            if (!(i == r && j == col)) {
                c[i][j] = a[i][j];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d", c[i][j]);
        }
        printf("\n");
    }
}