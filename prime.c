#include<stdio.h>
#include<string.h>
void prime(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    prime(n);
    // return 0;
}

void prime(int num){
    for(int i=2;i<=num/2;i++){
        if(num%i==0){
            printf("not prime");
            return;
        }
    }
    printf("prime");
    // return 0;
}