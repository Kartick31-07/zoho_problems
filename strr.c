#include<stdio.h>
#include<string.h>

void main()
{

    char a[]="hello";
    int len=strlen(a);

    for(int i=0;i<=len/2;i++)
    {

        char temp=a[i];
        a[i]=a[len-i-1];
        a[len-i-1]=temp;
    }
    printf("%s",a);
}