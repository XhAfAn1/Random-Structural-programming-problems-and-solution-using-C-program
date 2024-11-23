#include<stdio.h>
int factorial(int n) {
int i,f=1;

    for(i=1; i<=n; i++)
    {
        f=f*i;
    }
return f;
}


int main() {
int a,fact;
printf("Enter any number :");
scanf("%d",&a);
fact=factorial(a);
printf("factorial of %d is:%d",a,fact);
return 0;
}


