#include<stdio.h>
int main()
{
    int a=1;
    scanf("%d",&a);
    if((a%1==a)||(a%a==0))
    {
        printf("Prime");
    }
    else
    {
        printf("Not Prime");
    }
    return 0;
}