#include<stdio.h>
#include<math.h>
void main(){

    int n;

    printf("enter the num");
    scanf("%d",&n);

    int result,m,i=0;
    while(n>0){

            m=n%10;
            result+=m*pow(2,i);
            i++;
            n=n/10;
    }

    printf("%d",result);

}