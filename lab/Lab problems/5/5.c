#include<stdio.h>
#include<math.h>
int main()
{
    int F[100],i,x;
    printf("How many Fobonacci numbers you want to generate:");
    scanf("%d",&x);

    F[0]=0;
    F[1]=1;
    for (i= 2; i<x; i++)
    {
    F[i]=F[i-1]+F[i-2];
    }
    for (i= 0; i<x; i++)
    {
    printf("%d ",F[i]);
    }

    return 0;
}
