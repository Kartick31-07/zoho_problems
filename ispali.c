#include<stdio.h>
#include<string.h>

int main(){

    char a[]="hellolleh";
    int n=strlen(a);


    for(int i=1;i<=n/2;i++){

        if(a[i-1]!=a[n-i]){

            printf("not a palindrome");
            return 0;
        }
    }
    printf("pallindrome found");
    return 0;
}