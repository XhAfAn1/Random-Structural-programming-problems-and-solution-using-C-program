#include<stdio.h>
#include<math.h>

int main(){
    int n1,n2,q,r ;

    printf("Enter The dividend:");
    scanf("%d",&n1);
    printf("Enter The Divisor:");
    scanf("%d",&n2);

    if(n1!=0 && n2!=0) {
        q=n1/n2 ;
        r=n1%n2;
        printf("Q=%d \nR=%d",q,r);
    }

    else

        printf("Error!! Can't divide.");

    return 0;
}


