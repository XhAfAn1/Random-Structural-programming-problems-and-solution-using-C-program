#include<stdio.h>
#include<math.h>
int main()
{
   int i,j,k,r,sum=0,n;
    printf("input: ");
    scanf("%d",&n);

for(k=1;k<=n;k++) {
    j=log10(k)+1;
    for(i=k;i!=0;i=i/10) {
        r=i%10;
        sum=sum+pow(r,j);
    }

    if(sum==k)
        printf("%d ",sum);
    j=0;
    sum=0;
}
}

