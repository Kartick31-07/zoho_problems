#include<stdio.h>

void binary(int n){

    int ch[20],ch1[20],i=0,k=0;
    while (n>0)
    {
        int d=n%2;
        ch[i]=d;
        i++;
        n=n/2;
    }

    for(int j=i-1;j>=0;j--){

       printf("%d",ch[j]);
    }

    // for(int j=0;j<k;j++){

    //     printf("%d",ch1[j]);
    // }
}

int main(){

    int n;
    printf("enter the num");
    scanf("%d",&n);

    binary(n);
    return 0;
}