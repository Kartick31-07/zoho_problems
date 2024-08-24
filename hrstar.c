#include<stdio.h>

void main(){

    int n;

    printf("enter the num");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=i;j<=n;j++){

                printf(" ");
        }
        for(int k=1;k<=n;k++){

                if(k==1||k==n||i==1||i==n||i==k||k==n-i+1){
            printf("*");
                }
                else{
                    printf(" ");
                }
        }
        printf("\n");
    }
}
