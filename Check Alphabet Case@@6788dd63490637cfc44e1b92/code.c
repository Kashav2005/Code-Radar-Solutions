#include<stdio.h>
int main()
{
    char a[2];
    scanf("%s",&a);
    scanf("%s",&b);
    if(a>=65 && a<=90)
    {
        printf("Uppercase");
    }
    else if(a>=95 && a<=122)
    {
        printf("Lowercase");
    }
    else
    {
        printf("Not an alphabet");
    }
}