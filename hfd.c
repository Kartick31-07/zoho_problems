#include <stdio.h>  
  
int main()  
{  
    int n,m=1;  
    printf("Enter the number of columns");  
    scanf("%d",&n);  
for(int i=1;i<=n;i++)  
{  
  for(int j=1;j<=i;j++)  
  {  
    printf("*");  
  }  
  printf("\n");  
}  
 for(int i=n-1;i>=1;i--)  
 {  
   for(int j=1;j<=i;j++)  
   {  
     printf("*");  
   }  
   printf("\n");  
 }    
     
    return 0;  
}  

















// #include<stdio.h>

// void main()
// {

//   int n=5;
//   int count=1;

//   for(int i=0;i<2*i-1;i++){

//     for(int j=0;j<n;j++){


//       if(i<n){
//       if(j<n-i){

//         printf(" ");
//       }
//       else{
//         printf("*");
//       }
//       }
//       else{

//         if(j<n-i+1){

//           printf(" ");
//         }
//         else{

//           printf("*");
//         }
//       }
//     }
//   }
// }