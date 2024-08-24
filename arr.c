#include<stdio.h>
void main(){
    int n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
    }
    int max=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
    }
        }
        printf("%d",max);
}