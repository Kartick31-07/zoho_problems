#include<stdio.h>

void val(int n)
{

    int f1=0,f2=1,f3=0;
    int i=0,a[100],res[3],idx=0;
    a[0]=0,a[1]=1;

    for(i=2;f3<n;i++)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        a[i]=f3;
    }

    // for(int j=i-1;j>0;j--)
    // {
    //     if(a[j]<=n)
    //     {
    //         n=n-a[j];
    //         res[idx++]=a[j];
    //     }
    // }
    // for(int k=0;k<idx;k++)
    // {
    //     printf("%d \n",res[k]);
    // }

    for(int d1=0;d1<i-2;d1++)
    {
        for(int d2=d1+2;d2<i-1;d2++)
        {
            for(int d3=d2+2;d3<i;d3++)
            {
                if(a[d1]+a[d2]+a[d3]==n)
                {
                    printf("%d %d %d ",d1,d2,d3);
                }
            }
        }
    }
}
void main()
{
    int n;
    printf("enter the num");
    scanf("%d",&n);
    val(n);
}