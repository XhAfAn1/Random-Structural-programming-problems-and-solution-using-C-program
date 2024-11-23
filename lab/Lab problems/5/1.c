#include<stdio.h>
#include<math.h>
int main()
{

 float mark[10],avg;
 int i,sum=0;
 for (i= 1; i<=10;i++)
 {
 printf("Enter Person %d's score:",i);
 scanf("%f", &mark[i]);
 sum=sum+mark[i];
 }
 avg=sum/10.0;
 printf("The average score is :%.2f\n",avg);
return 0;
}
