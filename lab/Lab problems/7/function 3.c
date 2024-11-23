#include <stdio.h>
int fibo(int n)
{
      int i,a = 0,b=1,c=0;

    for(i=1; i<=n; i++)
    {
        printf("%d, ", c);

        a = b;
        b = c;
        c = a + b;
    }
}



int main()
{
    int n,fibonacci;

    printf("Enter the number: ");
    scanf("%d", &n);
    printf("First %d Fibonacci numbers are: ",n);
    fibonacci = fibo(n);

    return 0;
}
