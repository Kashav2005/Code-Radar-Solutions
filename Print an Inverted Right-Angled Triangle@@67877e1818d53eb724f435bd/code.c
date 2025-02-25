#include<stdio.h>
int main()
{
    int i,j,N;
    scanf("%d",&N);
    for(i=N;i>=1,)
    {
        for(j=N;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}