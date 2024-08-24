#include<stdio.h>
int fact( int num){
    if(num==0||num==1){
        return 1;
    }
    else{
        return num*fact(num-1);
    }
    
}
int main(){
    printf("enter the number");
    int num;
    scanf("%d",&num);
    int result=fact(num);
    printf("%d",result);
}
