//fib with recursion

// #include<stdio.h>
// int fib(int n){
//     if(n==0||n==1){
//          return n;
//     }
//     else{
//         return fib(n-1)+fib(n-2);
//     }
// }
// int main(){
//     int n;
//     printf("enter a number");
//     scanf("%d",&n);
//     printf("%d",fib(n));
//     return 0;
// }



//fib without recursion


#include<stdio.h>
int fib(int n){
    int n0=0,n1=1,n2;
    if(n<=1){
        return n;
    }
    else{
    for(int i=0;i<n-2;i++){
        n2=n1+n0;
        n0=n1;
        n1=n2;
        printf("%d", n2);
        }
        return n2;

    }
}
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
  printf("%d",fib(n));
    return 0;
}
