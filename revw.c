#include<stdio.h>

void reverse(char *st,char *end)
{
        while(st<end)
        {
            char temp=*st;
            *st=*end;
            *end=temp;

            st++,end--;
        }
}
void rev(char *a)
{
    char *st,*end;

    st=a;
    end=a;

    while(*end)
    {
        end++;
    }

    reverse(st,end-1);

    st=a;

    while(*a)
    {
        if(*(a+1)==' ' ||*(a+1)=='\0')
        {
            reverse(st,a);
            st=a+2;
        }
        a++;
    }

    printf("%s", a);
}

void main()
{
    char a[100],b[100];

    scanf("%[^\n]%*c", a);

    rev(a);

}