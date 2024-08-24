#include<stdio.h>
#include<string.h>

int main(){

    char a[]="python";
    char b[]="nthopy";
    int lena=strlen(a);
    int lenb=strlen(b);


    if(lena!=lenb){

        printf("not anargam size different");
        return 0;
                 }

    for(int i=lena-1;i>=0;i--){

        for(int j=0;j<lenb;j++){

            if(a[i]==b[j]){

                a[i]='\0';
            }
        }
    }
    if(a[0]!='\0'){

        printf("this is not anargam");
        return 0;
    }
    else{

        printf("anargam found");
        return 0;
    }
}