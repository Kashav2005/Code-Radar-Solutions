#include<stdio.h>
int main()
{
    int a,b;
    char x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%c",&x);
    switch (x){
    case '+':
        printf("%d\n",a+b);
        break;
     case '-':
        printf("%d\n",a-b);
        break;
    case '*':
        printf("%d\n",a*b);
        break;
    case '/':
        if (b!=0){
            printf("%d\n"a/b);
        
        else{
            printf("Error\n")
        break;
    default;
        printf(" error");
        
        
    }
    return 0;
}