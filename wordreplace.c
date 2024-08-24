#include<stdio.h>
#include<string.h>

void changewd(char s[],char s1[],char s2[])
{
    char c[100];
    int idx=0;
    int len=strlen(s),l1=strlen(s1),l2=strlen(s2);

    for(int i=0;i<len;i++)
    {
        int found=1;

        for(int j=0;j<l1;j++)
        {
            if(s[i+j]!=s1[j])
            {
                found=0;
                break;
            }
        }
        if(found)
        {
            for(int k=0;k<i;k++)
            {
                c[idx++]=s[k];
            }
            i+=l1;
            for(int j=0;j<l2;j++)
            {
                c[idx++]=s2[j];
            }
            for(int k=i;k<len;k++)
            {
                c[idx++]=s[k];
            }
            c[idx]='\0';
            // for(int m=0;m<idx;m++)
            // {
                printf("%s",c);
                return;
            // }
        }
        

    }
    printf("not found");
}
void getword()
{
    char s[100],s1[100],s2[100];
    printf("enter the string \n");
    scanf("%[^\n]s",&s);
    getchar();

    printf("enter the word1 \n");
    scanf("%[^\n]s",&s1);
    getchar();

    printf("enter the string \n");
    scanf("%[^\n]s",&s2);

    changewd(s,s1,s2);
}
void main()
{
    getword();
}