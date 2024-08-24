#include<stdio.h>
#include<string.h>
#include<ctype.h>

void main(){

    char a[]="this is the line";
    int len=strlen(a);
    int count=0;

    for(int i=1;i<len;i++){

        if(a[i-1]!=' '){
            a[i]=toupper(a[i]);
        }
    }
    for(int i=0;i<len;i++){

        if(a[i+1]==' '||a[i+1]=='\0'){

        for(int j=count;j<=(count+i)/2;j++){

                int temp=a[count];
                a[count++]=a[i-j];
                a[i-j]=temp;
            }
            count=i+2;
        }
    }
    printf("%s",a);
}