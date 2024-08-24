#include<stdio.h>



// void fib(int n){

//     for(int i=0;i<n;i++){

//         int n0=0,n1=1,n2;
//         printf("%d  %d",n0,n1);

//         for(int j=0;j<i;j++){

//             n2=n1+n0;
//             n0=n1;
//             n1=n2;
//             printf(" %d ",n2);
//         }
//         printf("\n");
//     }
// }


int fib(int n){

    if(n==0 || n==1){
        return n;
    }
    else{

        return fib(n-1)+fib(n-2);
    }
}
void main(){

    int n;

    printf("enter the num  ");
    scanf("%d",&n);

    printf("%d" ,fib(n));
}