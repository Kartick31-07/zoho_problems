#include<stdio.h>

void main()
{

    int a[4][4]={{1,2,3,5},{4,5,6,7},{7,8,9,0},{2,3,4,5}};
    int rl=sizeof(a)/sizeof(a[0]);
    int cl=sizeof(a[0])/sizeof(int);

    for(int i=0;i<rl;i++){

    for(int j=0;j<cl;j++){

        if(i==0||j==0||i==rl-1||j==cl-1){
            printf("%d ",a[i][j]);
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
    }

}