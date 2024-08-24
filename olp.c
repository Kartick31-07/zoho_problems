#include<stdio.h>
#include<string.h>

void main()
{
    char c[]="hellloee";
    int len=strlen(c);
    int cur_st=0,max=0;

    for(int i=0;i<len;i++)
    {
        int start=i,end=i;
        while(start>=0 && end<len && c[start]==c[end])
        {
            if(end-start+1>max)
            {
                max=end-start+1;
                cur_st=start;
            }
            end++;
            start--;
        }
        start=i,end=i+1;
        while(start>=0 && end<len && c[start]==c[end])
        {
            if(end-start+1>max)
            {
                max=end-start+1;
                cur_st=start;
            }
            end++;
            start--;
        }
    }
        
    for(int i=cur_st;i<cur_st+max;i++)
    {
        printf("%c %d",c[i],cur_st);
    }
}