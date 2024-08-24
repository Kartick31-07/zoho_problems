#include<stdio.h>

void main()
{

  int n=5;
  int count=1;

  for(int i=0;i<2*n-1;i++){

    for(int j=0;j<n;j++){


      if(i<n){
      if(j<n-i-1){

        printf(" ");
      }
      else{
        printf("*");
      }
      }
      else{

        if(j<i-n+1){

          printf(" ");
        }
        else{

          printf("*");
        }
      }
    }
    printf("\n");
  }
}