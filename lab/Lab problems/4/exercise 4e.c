#include<stdio.h>
int main() {
int n,i,a=0,b=1,sum=0;
printf("input n:");
scanf("%d",&n);

for(i=1; i<=n;i++)
{
    b=b+a;
    sum=sum+b;
    a=a+1;

}
printf("Sum=%d",sum);
 return 0;
}
