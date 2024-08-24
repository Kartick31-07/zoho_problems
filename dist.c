#include<stdio.h>
#include<string.h>
#include<stdbool.h>

bool ispal(char a[],int left,int right,int delct)
{
    while ((left<right))
    {
        if(a[left]!=a[right])
        {
            if(delct==0)
            {
                return false;
            }
            else
            {
                delct--;
            return ispal(a,left+1,right,delct)||ispal(a,left,right-1,delct);
            }
        }
        left++,right--;
    }
    return true;
    
}
void main()
{
    char a[]="hellollelliih";
    int len=strlen(a);
    int left=0,right=len-1;
    int delct=4;
    if(ispal(a,left,right,delct))
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}