#include<stdio.h>

void prtmat(int m,int n,int b[m][n])
{
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
}

void matrans(int n,int m,int a[n][m],int b[m][n])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            b[j][i]=a[i][j];
        }
    }
}

void getip(int n,int m,int a[n][m])
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
}
void main()
{
    int n,m;
    printf("enter the size");
    scanf("%d %d", &n,&m);

    int a[n][m],b[m][n];

    printf("enter the matrices");

    getip(n,m,a);

    matrans(n,m,a,b);

    prtmat(m,n,b);
}