#include<stdio.h>
#include<math.h>

int main(){
   float pi=3.1415926;
   float r,Area,Perimeter;

    printf("Enter the radius:");
    scanf("%f",&r);
    Area=pi*r*r;
    Perimeter=2*pi*r;
    printf("Area:%f\n Perimeter:%f",Area,Perimeter);

    return 0;
}

