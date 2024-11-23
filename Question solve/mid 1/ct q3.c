int main()
{
    float c,f,c1,c2,c3;

    printf("Enter first temp of the day:");
    scanf("%f",&c1);
    printf("Enter second temp of the day:");
    scanf("%f",&c2);
    printf("Enter third temp of the day:");
    scanf("%f",&c3);

    c=(c1+c2+c3)/3.0;

    f=c*(9.0/5)+32;
    printf("The average Temperature of Dhaka(celsius) is %.2f degree\n",c);
    printf("The average Temperature of Dhaka(Fahrenheit) is %.2f degree",f);




    return 0;
}
