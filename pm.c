#include<stdio.h>

void pm(int *a,int *b)
{
    *a=*a **b;

    printf("%d",*a);
}
void main()
{
    int a,b;
    
    scanf("%d %d",&a,&b);

    pm(&a,&b);
}