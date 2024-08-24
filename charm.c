#include<stdio.h>

void main()
{

    // int n=9;
    int a[]={1,2,2,2,3,4,6,6,7,8,9,9};
    int len=sizeof(a)/sizeof(a[0]);
    int count=0;

    for(int i=0;i<len-1;i++){
        int j=i+1;
            if(a[i]==a[j])
            {
                for(int k=j;k<len;k++)
                {
                    a[k]=a[k+1];
                }
                len--;
            }

        // if(a[i]==a[i+1]){

        //     count=i+1;

        //     for(int j=count;j<len;j++){

        //         if(count==len-1){

        //             len--;
        //         }
        //         else{

        //             a[count]=a[count+1];
        //             count++;
        //         }
        //     }
        // }

    }
    for(int i=0;i<len;i++){

        printf("%d ",a[i]);
    }
}