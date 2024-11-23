#include<stdio.h>
int main(){
   float Miles,Yards,kilometer;

    printf("Enter the distance in miles and yards\n");
    printf("Miles:");
    scanf("%f",&Miles);
    printf("Yards:");
    scanf("%f",&Yards);

    kilometer=(Miles+(Yards/1760.0))* 1.609;


    printf("The distance in kilometer is:%f km",kilometer);

    return 0;
}

