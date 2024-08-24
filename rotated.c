#include<stdio.h>
#include<string.h>

int main()
{

    char a[]="hello";
    char b[]="llohe";
    int len=strlen(a);
    char ch[2*len];

        strcpy(ch,a);
        strcat(ch,a);
        if(strstr(ch,b)){

            printf("true");
        }
        else{

            printf("false");
        }
    return 0;
}