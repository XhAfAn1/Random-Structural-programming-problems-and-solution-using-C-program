#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10],b[10][10],sum[10][10],i,j,r,c;
    printf("Enter the number of row:");
    scanf("%d",&r);
    printf("Enter the number of column:");
    scanf("%d",&c);


    for (i= 0; i<r; i++)
    {
        for (j= 0; j<c; j++)
    {
        printf("Enter A[%d][%d] =",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }
    for (i= 0; i<r; i++)
    {
        for (j= 0; j<c; j++)
    {
        printf("Enter B[%d][%d] =",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    }


         for (i= 0; i<r; i++)
    {
        for (j= 0; j<c; j++)
    {
        sum[i][j]=a[i][j]+b[i][j];

    }
    }
printf("\nC\n\n");
     for (i= 0; i<r; i++)
    {
        for (j= 0; j<c; j++)
    {
            printf("%d  ",sum[i][j]);

    }
    printf("\n");
    }


    return 0;
}
