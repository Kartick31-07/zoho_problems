#include<stdio.h>

void equal(char s[100],int count,int l1)
{
    for(int i=l1-1;i>=0;i--)
    {
        if(count>0 && s[i]=='(')
        {
            s[i]=' ';
            count--;
        }
        else if(count<0 && s[i]==')')
        {
            s[i]=' ';
            count++;
        }
    }
    printf("%s",s);
}
void check(char s[100])
{
    int l1=0,count=0;
    for(int i=0;s[i]!='0';i++)
    {
        l1+=1;
    }

    for(int j=0;j<l1;j++)
    {
        if(s[j]=='(')
        {
            count++;
        }
        else if(s[j]==')')
        {
            count--;
        }
    }
    if(count==0)
    {
        printf("True");
        return;
    }
    else
    {
        equal(s,count,l1);
    }
}
void main()
{
    char s[100];
    printf("enter the num ");
    scanf("%s",&s);

    check(s);
}