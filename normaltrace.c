#include<stdio.h>
#include<math.h>

void main()
{

    int a[4][4]={{1,2,3,4},{5,6,7,8},{9,0,1,2},{4,5,6,7}};
    int len=sizeof(a)/sizeof(a[0]),sum=0,dig=0;

    for(int i=0;i<len;i++){

        for(int j=0;j<len;j++){

            sum+=a[i][j]*a[i][j];

            if(i==j){

                    dig+=a[i][j];

            }
        }
    }

    int trace=sqrt(sum);
    printf("%d",trace);
    printf("%d",dig);
}