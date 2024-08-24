#include<stdio.h>
#include<string.h>
#include<stdbool.h>
int pali(int);
int main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int result=pali(a);
   if(a==result){
    printf("true");
   }
   else{
    printf("false");
   }}
int pali(int num){
    int temp,m;
    while(num!=0){
        m=num%10;
        temp=temp*10+m;
        num=num/10;
    }
    return temp;
}