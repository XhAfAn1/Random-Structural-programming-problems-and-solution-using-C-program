#include<stdio.h>
int main(){
   float C,F;

    printf("Enter Fahrenheit Temperature:");
    scanf("%f",&F);
   //C=(5*(F-32))/9;
    C=(5.0/9)*(F-32);
    printf("Temperature in Fahrenheit:%f\nTemperature in Celsius:%f",F,C);

    return 0;
}

