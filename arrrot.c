#include<stdio.h>

void main(){

    int r=2;
    int a[5]={1,2,3,4,5};
    int len=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<r;i++){

        int temp=a[0];
        for(int j=0;j<len-1;j++){

            a[j]=a[j+1];
        }
        a[len-1]=temp;
    }

    for(int i=0;i<len;i++){

        printf("%d",a[i]);
    }
}