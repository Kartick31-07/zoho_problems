#include<stdio.h>

void swap(char a[100],int j,int idx)
{
    char temp=a[j];
    a[j]=a[idx];
    a[idx]=temp;
}
void main()
{
    char a[]="abcxyzw";
    int i;
    for(i=0;a[i]!='\0';i++);
    int j=0;
    
    while(j<i)
    {
        int idx1=0;
        int max=0,min=10000;
        for(int k=j;k<i;k++)
        {
            if(j%2==0)
            {
                if(a[k]>max)
                {
                    max=a[k];
                    idx1=k;
                }
            }
            else
            {
                if(a[k]<min)
                {
                    min=a[k];
                    idx1=k;
                }
            }
        }

        swap(a,j,idx1);
        j++;

    }

    a[i]='\0';
    printf("%s",a);
}