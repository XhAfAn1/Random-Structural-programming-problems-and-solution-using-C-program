#include<stdio.h>
#include<math.h>
int main(){
   float x,y;

    printf("Enter x : ");
    scanf("%f",&x);

    y=(3*pow(x,5)-(5*sqrt(x))-(6*sin(x)));

    printf("f(%f)=%.4f",x,y);

    return 0;
}


