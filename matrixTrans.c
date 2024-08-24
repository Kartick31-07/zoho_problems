#include<stdio.h>

void main()
{

    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int rlen=sizeof(a)/sizeof(a[0]);
    int clen=sizeof(a[0])/sizeof(int);

    for(int i=0;i<rlen;i++){
    
        for(int j=i;j<clen;j++){

            int temp=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=temp;
        }
    }
  
    for(int i=0;i<rlen;i++){

        for(int j=0;j<clen/2;j++){

            int temp=a[i][j];
            a[i][j]=a[i][clen-j-1];
            a[i][clen-j-1]=temp;
        }
        printf("\n");
    }
      for(int i=0;i<rlen;i++){

        for(int j=0;j<clen;j++){

            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    // printf("%d",sizeof(a));
}