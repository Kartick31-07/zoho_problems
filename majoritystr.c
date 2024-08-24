// #include<stdio.h>

// void prtarr(int a[],int n,int idx)
// {

//     printf("the mojority element is %d repeated for %d times ", a[idx],n);

// }

// void majorityele(int a[],int n)
// {
//     int max=0,idx;

//     for(int i=0;i<n-1;i++)
//     {
//         int count=1;

//         for(int j=i+1;j<n;j++)
//         {
//             if(a[i]==a[j] && a[i]!=-1)
//             {
//                 count++;
//             }
//         }
//         if(count>max)
//         {
//             max=count;
//             idx=i;
//         }
//     }

//     prtarr(a,max,idx);
// }

// void getarr(int a[],int n)
// {
//     printf("Enter the elements ");

//     for(int i=0;i<n;i++)
//     {
//         scanf("%d", &a[i]);
//     }

//     majorityele(a,n);
// }

// void main()
// {
//     int n;

//     printf("Enter the size of the array");
//     scanf("%d",&n);

//     int a[n];

//     getarr(a,n);

// }





























#include<stdio.h>

void prtarr(int idx,int max)
{

    printf("the mojority element is %d repeated for %d times ", idx,max);

}

void majorityele(int a[],int n)
{
    int fre[1000]={},max=0,idx;

    for(int i=0;i<n;i++)
    {
        fre[a[i]]++;
    }

    for(int i=0;i<n;i++)
    {
        if(fre[a[i]]>max)
        {
            max=fre[a[i]];
            idx=a[i];
        }
    }
        prtarr(idx,max);
}

void getarr(int a[],int n)
{
    printf("Enter the elements ");

    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }

    majorityele(a,n);
}

void main()
{
    int n;

    printf("Enter the size of the array");
    scanf("%d",&n);

    int a[n];

    getarr(a,n);

}