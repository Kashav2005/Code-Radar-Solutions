#include<stdio.h>
int main()
{
    int a,b,x;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&x);
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
            printf("%d",a/b)
        }
        break;
        default;
        printf(" error");
        
        
    }
    return 0;
}