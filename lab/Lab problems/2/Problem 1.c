#include<stdio.h>
int main(){
    float bonus,computers,price,commission;

    printf("Enter the number of computers:");
    scanf("%f",&computers);
    printf("Price of each computer: ");
    scanf("%f",&price);

    bonus=computers*200;
    commission=((price*computers)*0.02);

    printf("Bonus:%.2f\n",bonus);
    printf("Commission:%.2f",commission);


    return 0;
}


