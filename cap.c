#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){

    char a[]="this is the line";
    int len=strlen(a);

    for(int i=0;i<len;i++){

        if(isspace(a[i-1]) || i==0){

            a[i]=toupper(a[i]);
        }
    }
    printf("%s",a);
}