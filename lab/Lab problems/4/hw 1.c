#include<stdio.h>
int main()
{
    int i,j,x,k=1;
    printf("Enter value:");
    scanf("%d",&x);
    for(i=1; i<=x; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",k++);
        }
        printf("\n");
    }
    return 0;
}
