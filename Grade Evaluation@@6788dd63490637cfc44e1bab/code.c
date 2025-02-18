#include<stdio.h>
int main()
{
    char X ;
    scanf("%c",&X);
    switch(X)
    {
    case 'A':
        printf("Excellent\n");
        break;
    case 'B':
        printf("Good\n");
        break;
    case 'C':
        printf("Average\n");
        break;
    case 'D':
        printf("Below Average\n");
        break;
     case 'F':
        printf("Fail\n");
        break;
    default:
        printf("Invalid grade\n");



    }
    return 0;
}