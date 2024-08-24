#include<stdio.h>

int main()
{

    int a[]={1,1,2,3,3,4};
    int lena=sizeof(a)/sizeof(a[0]);
    int count=0;

    for(int i=0;i<lena;i++)
    {

        int j=i+1;

            if(a[i]!=a[j]){

                a[count++]=a[i];
            }
            if(a[i]==a[count] && i==lena-1){

                i=lena-1;
            }
    }
    // printf("%d",a[lena]);
    for(int i=0;i<count;i++){

        printf("%d",a[i]);
    }
}