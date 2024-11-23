#include<stdio.h>
#include<math.h>
int main()
{
    int A[10],B[10],i,x,j,k=0;
    printf("Input the size of the array A:");
    scanf("%d",&x);
    for (i= 0; i<x; i++)
    {
        printf("Input the values of A:");
        scanf("%d", &A[i]);
    }
    for (j=x; j>0; j--)
    {
        B[j]=A[k];
        k++;
    }
    printf("Array B: ");
    for (i=1; i<=x; i++)
    {
        printf("%d ",B[i]);
    }
    return 0;
}
