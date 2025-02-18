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
        if (b==0){
            printf("Error\n");
        }
        else{
            printf("%d\n",a/b)
        }
        break;
    default;
        printf(" error");
        
        
    }
    return 0;
}