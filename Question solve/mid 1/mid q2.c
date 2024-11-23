int main()
{
int n,i,j;
float pi,sum=0;
printf("Enter the number of terms:");
scanf("%d",&n);
for(i=0,j=1;i<n; i++,j=j+2)
{
sum=sum+pow(-1,i)*(4.0/j);
}
printf("pi=%f",sum);
return 0;
}
