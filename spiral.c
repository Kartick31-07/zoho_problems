#include<stdio.h>

void main()
{
    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,5,7,4},{3,1,2,4}};
    
    int t=0,b=3,l=0,r=3;

    while(t<=b && l<=r)
    {
        for(int i=l;i<=r;i++)
        {
            printf("%d ", a[t][i]);
        }
        t++;

        for(int j=t;j<=b;j++)
        {
            printf("%d ", a[j][b]);
        }
        r--;
        if(r>=l){
                
            for(int i=r;i>=l;i--)
            {
                printf("%d ",a[b][i]);
            }
            b--;
        }
        if(b>=t){
            for(int j=b;j>=t;j--)
            {
                printf("%d ",a[j][l]);
            }
            l++;
        }
    }

}