// #include<stdio.h>
// void arms(int n){
//     int temp=0,m;
//     int d=n;
//     while(n>0){
//         m=n%10;
//         temp+=m*m*m;
//         n=n/10;
//     }
//     if(d==temp){
//     printf("yess");
//     }
//     else{
//         printf("nooo");
//     }
// }
// int main(){
//     int n;
//     printf("enter the number");
//     scanf("%d",&n);
//     arms(n);
//     return 0;
// }












#include<stdio.h>


void num(int n,int count)
{
    int sum=0;

    while(n>0)
    {
        int mod=n%10;
        int it=count;
        int pow=1;

        while(it>1)        
        {
            pow*=mod;
            it--;
        }

        sum+=mod;
        n/=10;
    }

    printf("%d",sum);
}
void arm(int n)
{
    int count=0,d=n;

    while(d>0)
    {
        d/=10;
        count++;
    }

    num(n,count);
}
void main()
{
    int n;

    printf("enter the number");
    scanf("%d",&n);

    arm(n);

}