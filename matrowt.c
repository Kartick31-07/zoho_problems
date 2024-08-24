#include<stdio.h>

void main()
{

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int n=sizeof(a)/sizeof(a[0]);
    int c=sizeof(a[0])/sizeof(int);
    // printf("%d %d",n,c);

    for(int i=0;i<n/2;i++){

        for(int j=0;j<c;j++){

            int temp=a[i][j];
            a[i][j]=a[n-i-1][j];
            a[n-i-1][j]=temp;
        }
        
    }

    for(int i=0;i<n;i++){

        for(int j=0;j<c;j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}