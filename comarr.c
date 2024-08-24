#include<stdio.h>

void main()
{

    int a[]={1,3,2,3,4};
    int b[]={3,4,5,3,6};
    int c[20]={0},count=0;
    int lena=sizeof(a)/sizeof(a[0]);
    int lenb=sizeof(b)/sizeof(b[0]);

    for(int i=0;i<lena;i++){

        for(int j=0;j<lenb;j++){

            if(a[i]==b[j]){

                c[count++]=a[i];
                break;
            }
        }
    }
    for(int i=0;i<count;i++){

        printf("%d ",c[i]);
    }
}