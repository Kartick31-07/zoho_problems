// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #define MAX_WORDS 100
// #define MAX_WORD_LENGTH 100

// void sortString(char *str) {
//     int len = strlen(str);
//     for (int i = 0; i < len - 1; i++) {
//         for (int j = i + 1; j < len; j++) {
//             if (str[i] > str[j]) {
//                 char temp = str[i];
//                 str[i] = str[j];
//                 str[j] = temp;
//             }
//         }
//     }
// }

// int findGroup(char *keys[], int groupCount, char *key) {
//     for (int i = 0; i < groupCount; i++) {
//         if (strcmp(keys[i], key) == 0) {
//             return i;
//         }
//     }
//     return -1;
// }

// void groupAnagrams(char *words[], int wordCount) {
//     char *keys[MAX_WORDS];
//     char *groups[MAX_WORDS][MAX_WORDS];
//     int groupSizes[MAX_WORDS] = {0};
//     int groupCount = 0;

//     for (int i = 0; i < wordCount; i++) {
//         char sortedWord[MAX_WORD_LENGTH];
//         strcpy(sortedWord, words[i]);
//         sortString(sortedWord);

//         int groupIndex = findGroup(keys, groupCount, sortedWord);
//         if (groupIndex == -1) {
//             groupIndex = groupCount++;
//             keys[groupIndex] = strdup(sortedWord);
//         }
//         groups[groupIndex][groupSizes[groupIndex]++] = words[i];
//     }

//     // Print the groups
//     for (int i = 0; i < groupCount; i++) {
//         printf("[");
//         for (int j = 0; j < groupSizes[i]; j++) {
//             printf("\"%s\"", groups[i][j]);
//             if (j < groupSizes[i] - 1) {
//                 printf(", ");
//             }
//         }
//         printf("]\n");
//     }
// }

// int main() {
//     char *words[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
//     int wordCount = sizeof(words) / sizeof(words[0]);

//     groupAnagrams(words, wordCount);

//     return 0;
// }




























#include<stdio.h>
#include<string.h>

int find(int grpcount,char *keys[],char *b)
{
    for(int i=0;i<grpcount;i++)
    {
        if(strcmp(keys[i],b)==0)
        {
            return i;
        }
    }

        return -1;
}
void sort(char *a)
{
    int sl=strlen(a);
    for(int i=0;i<sl-1;i++)
    {
        for(int j=i+1;j<sl;j++)
        {
            if(a[i]>a[j])
            {
                char temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}
void srcana(char *a[],int len)
{
    char b[100],*keys[100];
    int groupcount=0,groupsize[100]={0};
    char *group[100][100];

    for(int i=0;i<len;i++)
    {
        strcpy(b, a[i]);
        sort(b);

        int idx=find(groupcount,keys,b);
        if(idx==-1)
        {
            idx=groupcount++;
            keys[idx]=strdup(b);
        }
        group[idx][groupsize[idx]++]=a[i];
    }

    for(int i=0;i<groupcount;i++)
    {
        for(int j=0;j<groupsize[i];j++)
        {
            printf("%s ",group[i][j]);
        }
        printf("\n");
    }
    
}
void main()
{
    char *words[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int size=sizeof(words)/sizeof(words[0]);
    
    srcana(words,size);
}