#include<stdio.h>
#include<math.h>
int main()
{
    int a[10][10],b[10][10],c[10][10],i,j,k,a1,a2,b1,b2,sum=0;
    printf("Enter row of A:");
    scanf("%d",&a1);
    printf("Enter col of A:");
    scanf("%d",&a2);
    printf("Enter row of B:");
    scanf("%d",&b1);
    printf("Enter col of B:");
    scanf("%d",&b2);

    if(b1==a2) {


    for (i= 0; i<a1; i++)
    {
        for (j= 0; j<a2; j++)
    {
        printf("Enter A[%d][%d] =",i+1,j+1);
        scanf("%d",&a[i][j]);
    }
    }
    for (i= 0; i<b1; i++)
    {
        for (j= 0; j<b2; j++)
    {
        printf("Enter B[%d][%d] =",i+1,j+1);
        scanf("%d",&b[i][j]);
    }
    }


         for (i= 0; i<a1; i++)
    {
        for (j= 0; j<b2; j++)
    {
        for(k=0;k<b1;k++){
            sum=sum+(a[i][k]*b[k][j]);
        }
        c[i][j]=sum;
        sum=0;

    }
    printf("\n");
    }
printf("\nC\n\n");
     for (i= 0; i<a1; i++)
    {
        for (j= 0; j<b2; j++)
    {
            printf("%d  ",c[i][j]);

    }
    printf("\n");
    }
    }
else
    printf("column of A and row of B must be same");

    return 0;
}
