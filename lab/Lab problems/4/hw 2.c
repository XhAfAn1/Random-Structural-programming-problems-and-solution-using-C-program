#include<stdio.h>
int main()
{
    int i,j=1,n;
    printf("Enter power:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        j=j*3;
    }
    printf("%d",j);
    return 0;
}
