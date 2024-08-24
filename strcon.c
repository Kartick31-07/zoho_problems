#include<stdio.h>
// #include<string.h>
void strct(char a[],char b[]){
    int i,j;
    for( i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++){
        a[i]=b[j];
        i++;
    }
    a[i]='\0';
    printf("%s",a);
}
int main(){
printf("enter the strings");
char a[20],b[20];
scanf("%s%s",&a,&b);
strct(a,b);
return 0;
}
