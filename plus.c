// #include<stdio.h>

// void main(){

//     int n;

//     printf("enter the num");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<=n;j++){

//             if(i==n/2+1||j==n/2+1){

//                 printf("*");
//             }
//             else{

//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }








#include<stdio.h>

void main(){

    int n;

    printf("enter the num");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=1;j<=n;j++){

            if(i==j||j==n-i+1){

                printf("*");
            }
            else{

                printf(" ");
            }
        }
        printf("\n");
    }
}