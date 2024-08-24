// #include<stdio.h>
// #include<math.h>

// void main()
// {

//     int n=407;
//     int t=n,d=n;
//     int count=0,result=0;

//     while(n>0){

//         n=n/10;
//         count++;
//     }

//     while(t>0){

//         int m=t%10;
//         result+=pow(m,count);
//         t/=10;
//     }
//     if(result==d){

//         printf("armstrong");
//     }
//     else{
//         printf("not armstrong");
//     }
// }

#include <stdio.h>
#include <string.h>

void main()
{

    char a[] = "0101";
    char b[] = "1011";
    int l = strlen(a);
    char ch[l + 1];
    int carry = 1, idx = 0;

    for (int i = l - 1; i >= 0; i--)
    {

        if (carry == 1)
        {

            if (a[i] == '1' && b[i] == '1')
            {

                ch[idx++] = 1 + '0';
            }
            else if (a[i] == '0' && b[i] == '0')
            {

                ch[idx++] = 1 + '0';
                carry = 0;
            }
            else
            {

                ch[idx++] = 0 + '0';
            }
        }
        else if (carry == 0)
        {

            if (a[i] == '1' && b[i] == '1')
            {

                ch[idx++] = 0 + '0';
                carry = 1;
            }
            else if (a[i] == '0' && b[i] == '0')
            {

                ch[idx++] = 0 + '0';
                // carry=0;
            }
            else
            {

                ch[idx++] = 1 + '0';
            }
        }
    }
    ch[l] = '\0';
    for (int i = l - 1; i >= 0; i--)
    {

        printf("%c", ch[i]);
    }
}