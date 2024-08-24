#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int b[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int c[3][3]={0};
    printf("enter the number\n");
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            // scanf("%d",&a[i][j]);
            for(int k=0;k<3;k++){
            c[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    // printf("%d",s);
    return 0;
}