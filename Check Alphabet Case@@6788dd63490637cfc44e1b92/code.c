#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
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