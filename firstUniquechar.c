#include<stdio.h>

void main()
{

    int a[]={1,2,3,4,4,2,3,5,1};
    int len=sizeof(a)/sizeof(a[0]);

    for(int i=0;i<len-1;i++){

        for(int j=i+1;j<len;j++){

            if(a[i]==a[j]){

                break;
            }
            else if(j==len-1 && a[i]!=a[j])
            {

                printf("%d",a[i]);
                i=len;
            }
        }
    }
}