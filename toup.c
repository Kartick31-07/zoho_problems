#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){

    char a[]="this is the string";
    int len=strlen(a);

    for(int i=0;i<len;i++)
    {

        if(i==0||a[i-1]==' ' && isalpha(a[i])){
           a[i]=toupper(a[i]);
           
        }
    }
    printf("%s",a);
}