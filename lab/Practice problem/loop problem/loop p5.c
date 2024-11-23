#include<stdio.h>
int main()
{
    int i,x,n1,n2,HCF;

    scanf("%d%d",&n1,&n2);

    for(i=1;i<=n1/2;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            HCF=i;
        }
    }
    printf("%d",HCF);
}
