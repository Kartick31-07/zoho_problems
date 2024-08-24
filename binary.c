#include<stdio.h>
int main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    char b[n + 1],o[n+1],t[n+1];
    printf("enter the bit");
    scanf("%s",b);


    for(int i=0;i<n;i++){
        if(b[i]=='0'){
            o[i]='1';
        }
        else if(b[i]=='1'){
            o[i]='0';
        }
    }
    o[n]='\0';

    //two's complement 

    int carry=1;
    for(int i=n-1;i>=0;i--){
        if(o[i]=='1'&&carry==1){
            t[i]='0';
        }
        else if(o[i]=='0'&&carry==1){
            t[i]='1';
            carry=0;
        }
        else{
            t[i]=o[i];
        }
    }
    t[n]='\0';
        printf("%s\n",b);
        printf("%s\n",o);
        printf("%s\n",t);
        return 0;
}