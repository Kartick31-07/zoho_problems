// #include<stdio.h>
// #include<string.h>

// void prtstr(char a[],int ls,int max)
// {
//     printf("%d",max);

//     for(int i=ls;i<ls+max;i++)
//     {
//         printf("%c",a[i]);
//     }
// }

// void lonpal(char a[],int len)
// {
//     int mlen=0,start=0,end=0,ls=0;

//     for(int i=0;i<len;i++)
//     {
//         if(len%2==0)
//         {
//             start=i;
//             end=i+1;

//          while (start >= 0 && end < len && a[start] == a[end]){

//             if(end-start+1>mlen)
//             {
//                 mlen=end-start+1;
//                 ls=start;

//             }
//             start--;
//             end++;
//         }

//     }
//     else{
//             start=i;
//             end=i;

//          while (start >= 0 && end < len && a[start] == a[end]){

//             if(end-start+1>mlen)
//             {
//                 mlen=end-start+1;
//                 ls=start;

//             }
//             start--;
//             end++;
//         }

//     }
//     }
//     prtstr(a,ls,mlen);
// }

// void main(){

//     char a[]="helehomadadam";
//     int len=strlen(a);

//     lonpal(a,len);
    
// }


















#include <stdio.h>
#include <string.h>

// Helper function to find the longest palindromic substring
void longestPalindrome(char *str) {
    int n = strlen(str);
    if (n == 0) return;
    
    int start = 0, maxLength = 1;
    
    for (int i = 0; i < n; i++) {
        // Even length palindromes
        int low = i;
        int high = i+1;
        while (low >= 0 && high < n && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
        
        // Odd length palindromes
        low = i ;
        high = i ;
        while (low >= 0 && high < n && str[low] == str[high]) {
            if (high - low + 1 > maxLength) {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }

    printf("Longest Palindromic Substring is: ");
    for (int i = start; i < start + maxLength; ++i) {
        printf("%c", str[i]);
    }
    printf("\n");
}

int main() {
    char str[] = "babmadam";
    printf("Original String: %s\n", str);
    longestPalindrome(str);
    return 0;
}
