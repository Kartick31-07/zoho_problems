#include<stdio.h>
#include<string.h>

void cas(char a[100],int n)
{
    if(n==1)
    {
        strcpy(a,"1");
        return;
    }

    char result[100];
    cas(a,n-1);
    int len=strlen(a),idx=0,i;
    // int result[100];

    for( i=0;i<len;)
    {
        char cur=a[i];
        int count=0;

        while(i<len && a[i]==cur)
        {
            count++;
            i++;
        }

        result[idx++]=count+'0';
        result[idx++]=cur;

    }
    result[idx]='\0';
    strcpy(a,result);
    }

void main()
{
    char a[100];
    int n;

    printf("Enter the number");
    scanf("%d", &n);

    cas(a,n);

    printf("%s",a);
}