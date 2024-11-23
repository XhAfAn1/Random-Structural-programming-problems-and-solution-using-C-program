#include<stdio.h>
#include<math.h>

int main(){
    int num;

    printf("Please Enter your number:");
    scanf("%d",&num);

    if(num>=90 && num<=100)

        printf("Grade is A");

    else if(num>=80 && num<=89)

        printf("Grade is B");

    else if(num>=70 && num<=79)

        printf("Grade is C");

    else if(num>=60 && num<=69)

        printf("Grade is D");

    else if(num>=0 && num<=59)

        printf("Grade is F");

    else

         printf("Invalid input");

    return 0;
}


