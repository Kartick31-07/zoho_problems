// #include<stdio.h>

// void main(){

//     int n=7;

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<2*n-i+1;j++){

//             if(j<i){

//                 printf(" ");
//             }
//             else{

//                 printf("*");
//             }
//         }
//         printf("\n");
//     }
// }
















#include<stdio.h>

void main()
{

    int n=7;

    for(int i=1;i<=n;i++){

        for(int j=i;j<n+2*i-1;j++){

            if(j<n){

                printf(" ");
            }
            else{

                printf("*");
            }
        }
        printf("\n");
    }
}