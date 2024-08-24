// #include<stdio.h>

// void main(){

//     int n;

//     printf("enter the num");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){

//         for(int j=i;j<=n;j++){

//                 printf(" ");
//         }
//         for(int k=1;k<=n;k++){

//             printf("*");
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

        for(int j=1;j<=i;j++){

                printf(" ");
        }
        for(int k=1;k<=n;k++){

            printf("*");
        }
        printf("\n");
    }
}
