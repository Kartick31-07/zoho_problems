#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="edsabclkarthicgj";
    char b[]="xsabckarthico";
    int len1=strlen(a);
    int l2=strlen(b);

    int max=0,cst=0;
    for(int i=0;i<len1;i++)
    {
        for(int j=0;j<l2;j++)
        {
            int count=0;
            while(a[i]==b[j])
            {
                i++;
                j++;
                if(++count>max)
                {
                    max=count;
                    cst=i-count;
                }
            }
        }
    }
    for(int i=cst;i<cst+max;i++)
    {
        printf("%c",a[i]);
    }
}