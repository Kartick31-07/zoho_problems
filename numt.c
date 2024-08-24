#include<stdio.h>
int main(){
    int n,count=0;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d",++count);
        }
        // count--;
        for(int l=1;l<i;l++){
            printf("%d",--count);
        }
printf("\n");
count=0;
    }
    
    
    return 0;
}