#include <stdio.h>
int sumPositive(int n,int a[])
{
      int i,sum=0,*p;
    p=&a[0];
    for(i=0; i<n; i++)
    {
        if(*(p+i)>0){
            sum=sum+*(p+i);
        }
    }
    return sum;
}



int main()
{
    int i,a[100],n,*p,sum;

    printf("Input data size: ");
    scanf("%d", &n);
    p=&a[0];
    printf("Input data: ");
    for(i=0;i<n;i++) {
        scanf("%d",(p+i));
    }

    sum=sumPositive(n,p);
    printf("sum of all the integers in the array that are greater than 0 is:%d",sum);

    return 0;
}

