#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,sum=0,num;
    printf("Enter the number: ");
    scanf("%d",&num);

    /*while(n!=0) {
        a=n%10;
        sum=sum*10+a;
        n=n/10;

    }*/
    n=num;
    for(n;n!=0;n=n/10) {
        a=n%10;
        sum=(sum*10)+a;
    }

    printf("%d\n",num);
    if(sum ==num) {
        printf("The number is palindrome number");
    }
    else
        printf("The number is not palindrome number");

    return 0;
}
