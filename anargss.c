#include<stdio.h>
#include<string.h>

void main()
{
    char str1[]="this is pallin";
    char str2[]="lapl";
    int l1=strlen(str1);
    int l2=strlen(str2);


    for(int i=0;i<l1;i++)
    {
        char c[256]={0};
        
         for(int k=0;k<l2;k++)
        {
            c[str2[k]]++;
        }

        int count=0;

        for(int j=i;j<i+l2;j++)
        {
            if(c[str1[j]]>0)
            {
                c[str1[j]]--;
                count++;
            }
            if(count==l2)
            {
                printf("found");
                return;
            }
        }
    }
    printf("not found");
}