#include<stdio.h>
int main(){
   double volume,height,length,width;

    printf("Enter height of box:");
    scanf("%lf",&height);
    printf("Enter length of box:");
    scanf("%lf",&length);
    printf("Enter width of box:");
    scanf("%lf",&width);

    volume = height * length * width;
    printf("Volume (cubic inches):%lf",volume);

    return 0;
}

