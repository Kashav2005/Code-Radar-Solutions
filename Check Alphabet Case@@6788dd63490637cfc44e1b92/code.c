#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    if(a>=65 && a<=90)
    {
        printf("Uppercase");
    }
    else if(b>=95 && b<=122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}