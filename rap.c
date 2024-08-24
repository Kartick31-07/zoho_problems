// #include<stdio.h>

// void main(){

//     int n;

//     printf("enter the number");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){

//         for(int j=1;j<i;j++){

//             printf(" ");
//         }
//         for(int k=n;k>=i;k--){
//             printf("*");
//         }
//         printf("\n");
//     }


//      for(int i=1;i<n;i++){

//         for(int j=n-1;j>i;j--){

//             printf(" ");
//         }
//         for(int k=1;k<=i+1;k++){

//             printf("*");
//         }
//         printf("\n");
//     }
// }










#include<stdio.h>

void main(){

    int n;

    printf("enter the number");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){

        for(int j=n;j>=i;j--){

            printf("*");
        }
        printf("\n");
    }


     for(int i=2;i<=n;i++){

        for(int j=1;j<=i;j++){

            printf("*");
        }
        printf("\n");
    }
}