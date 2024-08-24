#include<stdio.h>
#include<string.h>

void getlen(char a[],int n)
{
    int start=0,end=0,max=0,cur_st=0;
    int asc[256];

    for(int i=0;i<256;i++)
    {
        asc[i]=-1;
    }
    for(int j=0;j<n;j++)
    {
        if(asc[a[j]]>=start)
        {
            start=asc[a[j]]+1;
        }

        asc[a[j]]=j;
        if(j-start+1>max)
        {
            max=j-start+1;
            cur_st=start;
        }
    }
    for(int i=cur_st;i<cur_st+max;i++)
    {
        printf("%c", a[i]);
    }
    printf("\n%d",max);
}
void main()
{
    char a[]="aabccdeffg";
    int n=strlen(a);

    getlen(a,n);
}