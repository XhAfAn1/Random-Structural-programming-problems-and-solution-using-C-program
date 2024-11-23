#include<stdio.h>
int main()
{
int a[10];
int num,i,temp;
printf("Enter the number");
scanf("%d",&num);
for(i=0;i<10;i++)
{
a[i]=0;
}
while(num>0)
{
temp=num%10;
a[temp]++;
num=num/10;
}
for(i=0;i<10;i++)
{
printf("Frequency of %d :%d\n",i,a[i]);
}
return 0;
}
