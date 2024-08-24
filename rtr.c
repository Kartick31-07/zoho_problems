// #include<stdio.h>

// void main(){

//     int n;

//     printf("enter the number");
//     scanf("%d",&n);

//     for(int i=0;i<n;i++){

//         for(int j=0;j<=i;j++){

//             printf("*");
//         }
//         printf("\n");
//     }
// }















// #include<stdio.h>

// void main(){

//     int n;

//     printf("enter the number");
//     scanf("%d",&n);

//     for(int i=0;i<n;i++){

//         for(int j=n;j>=i;j--){

//             printf("*");
//         }
//         printf("\n");
//     }
// }




























// #include<stdio.h>

// void main(){

//     int n;

//     printf("enter the number");
//     scanf("%d",&n);

//     for(int i=0;i<=n;i++){

//         for(int k=0;k<=i;k++){

//             printf(" ");
//         }

//         for(int j=n;j>=i;j--){

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

        for(int j=1;j<=i;j++){

            printf(" ");
        }

        for(int k=n;k>=i;k--){

                if(i==1||k==n||i==n||k==i){
                    printf("*");
                }
                else{

                    printf(" ");
                }
        }
        printf("\n");
    }
}