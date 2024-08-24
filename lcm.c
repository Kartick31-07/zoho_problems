#include<stdio.h>

void main(){

    int n,m;

    printf("enter the number ");
    scanf("%d %d",&n,&m);

    int max=(n>m)?n:m;
    int t=max;

    while (1)
    {
        if(max%m==0 && max%n==0){
            printf("%d",max);
            break;
        }
        else{

            max+=t;
        }
    }
    
}