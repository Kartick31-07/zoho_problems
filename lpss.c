#include<stdio.h>

void subs(char a[100])
{
    int l,max=1;

    for(l=0;a[l]!='\0';l++);

    int i=0,cur_st=0;
while(i<l)
{
    int st=i,end=i+1;      
    while(st>=0 &&end<l && a[st]==a[end])
    {
        if(end-st+1>max)
        {
            max=end-st+1;
            cur_st=st;
        }
        st--,end++;
    }

    st=i,end=i;
    while(st>=0 && end<l && a[st]==a[end] )
    {
        if(end-st+1>max)
        {
            max=end-st+1;
            cur_st=st;
        } 
        st--,end++;
    }
    i++;
}
    
    for(int i =cur_st;i<cur_st+max;i++)
    {
        printf("%c",a[i]);
    }
}
void main()
{
    char a[]="abbaab";

    subs(a);
}