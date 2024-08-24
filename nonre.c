#include<stdio.h>
#include<string.h>

void main(){

    char a[]="hello";
    int l=strlen(a);


    for(int i=0;i<l-1;i++){

        for(int j=i+1;j<l;j++){

            if(a[i]==a[j]){
                a[i]=' ';
                a[j]=' ';
            }
        }}
        for(int i=0;i<l;i++){

            if(a[i]!=' '){

                printf("%c",a[i]);
            }
        }
}