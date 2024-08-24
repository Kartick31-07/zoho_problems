// #include<stdio.h>
// #include<string.h>
// int main(){
//     char a[10],b[10];
//     printf("enter the nums");
//     scanf("%s%s",&a,&b);
//     int n=strlen(a);
//     int n1=strlen(b);
//     if(n1=n){
//         printf("not equal");
//         return 0;
//     }
//     for(int i=0;i<n;i++){
//         if(a[i]!=b[i]){
//             printf("the strings are not equal");
//             return 0;
//         }
//     }
//     printf("the strings are equal");
//     return 0;
// }














// #include<stdio.h>
// #include<string.h>

// int main(){

//     char a[]="aaabbcddeff";
//     int len =strlen(a);
//     int count=1,j=1;

//     for(int i=0;i<len;i++){

//         if(i!=len-1 && a[i]==a[i+1])
//         {
//             count++;
//         }
//         else
//         {

//                 if(count>1 && i!=len-1){

//                     a[j++]=count + '0';
//                     count=1;
//                     a[j++]=a[i+1];
//                 }
//                 else if(i==len-1){
//                      a[j++]=count + '0';
//                     count=1;
//                 }
//                 else{
// /                    a[j++]=a[i+1];
//                 }
//         }
        
//     }
//     a[j]='\0';
//     printf("%s",a);
// }





















#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="aaaabbcddefg";
    int l= strlen(a),count=1,idx=1;

    for(int i=1;i<=l;i++)
    {
        if(a[i]==a[i-1])
        {
            count++;
        }
        else
        {
            if(count>1)
            {
                a[idx++]=count +'0';
                count=1;
            }
            a[idx++]=a[i];
        }
    }
    a[idx++]='\0';

    printf("%s",a);
}


