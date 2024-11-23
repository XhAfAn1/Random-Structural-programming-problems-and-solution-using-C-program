#include<stdio.h>
#include<math.h>

int main(){
    int a,b,c;

    printf("Please Enter a =");
    scanf("%d", &a);
    printf("Please Enter b =");
    scanf("%d", &b);
    printf("Please Enter c =");
    scanf("%d", &c);


    if(a>b && a>c){
            if(b>c)
            {
                printf("Min =%d, ",c);
                printf("Max =%d, ",a);
                printf("Median =%d, ",b);
            }
            else {
                printf("Min =%d, ",b);
                printf("Max =%d, ",a);
                printf("Median =%d, ",c);
            }

    }
    else if(b>a && b>c){
            if(a>c)
            {
                printf("Min =%d, ",c);
                printf("Max =%d, ",b);
                printf("Median =%d, ",a);
            }
            else {
                printf("Min =%d, ",a);
                printf("Max =%d, ",b);
                printf("Median =%d, ",c);
            }

    }

    else if(c>a && c>b){
            if(a>b)
            {
                printf("Min =%d, ",b);
                printf("Max =%d, ",c);
                printf("Median =%d, ",a);
            }
            else {
                printf("Min =%d, ",a);
                printf("Max =%d, ",c);
                printf("Median =%d, ",b);
            }

    }



    return 0;
}
