#include<stdio.h>
int main(){
    int i=1;
    int num;
    printf("enter the number");
    scanf("%d",&num);
    do{
        printf("%d\n",num*i);
        i++;
    }
    while(i<5);

    // char pwd[]="hello";
    // char ip[23];
    // do{
    //     printf("enter the pwd");
    //     scanf("%s",&ip);

    // }
    // while(ip!=pwd);
    // printf("password is correct!");
    // return 0;
}