#include<stdio.h>
#include<math.h>
int main()
{
    int a[50],i,x,m;
    printf("Input number of elements in the array:");
    scanf("%d",&x);

    for (i= 0; i<x; i++)
    {
        printf("Input values: ");
        scanf("%d", &a[i]);
    }
    m=a[0];
    for (i= 1; i<x; i++)
    {
        if(m>a[i])
        {
            m=a[i];
        }
    }
    printf("The SMALLEST value is:%d",m);
    return 0;
}
