#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,n1,n2,a,b;
    printf("Enter the number: ");
    scanf("%d",&n);

    n1=n;
    while(n1>=10) {
        n1=n1%10;
    }
    printf("Last digit is:%d\n",n1);

        n2=n;
    while(n2>=10) {
        n2=n2/10;
    }
    printf("first digit is:%d",n2);

    return 0;
}


