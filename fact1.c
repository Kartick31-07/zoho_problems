#include<stdio.h>
int fact(int a){
    int j=1;
    for(int i=1;i<=a;i++){
        j*=i;
    }
    return j;
}
int main(){
    int n;
    printf("entyer the nums");
    scanf("%d",&n);
    printf("%d",fact(n));
    return 0;
}