#include<stdio.h>
int prime_number(int n) {
     int i;

    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            printf("not Prime");
            return 0;
        }
    }
    printf("Prime");

}

int min_factor(int n) {
int i;

    for(i=2; i<=n/2; i++)
    {
        if(n%i == 0)
        {
            printf("\nMinimum factor :%d",i);
            return 0;
        }
    }

}


int main() {
int a;
printf("Enter any number :");
scanf("%d",&a);
prime_number(a);
min_factor(a);

return 0;
}

