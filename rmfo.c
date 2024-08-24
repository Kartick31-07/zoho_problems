#include<stdio.h>

void main()
{
    int fre[256]={0};
    char a[]="vellore";
    int i=0,count=0;

    while ( a[i]!='\0')
    {
        if(fre[a[i]]!=0)
        {
            a[count++]=a[i];
        }
        fre[a[i]]++;
        i++;
    }
    a[count]='\0';

    printf("%s",a);
}