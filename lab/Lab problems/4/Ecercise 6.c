#include<stdio.h>
#include<math.h>

int main()
{
    float t1,t2,f,a,c1,c2,c3,c,num;
    int i,x;
    printf("Input total student number:");
    scanf("%d",&x);

    for(i=1; i<=x; i++)
    {


        printf("Enter your Term 1 number:");
        scanf("%f",&t1);
        printf(" Enter your Term 2 number:");
        scanf("%f",&t2);
        printf("Enter your Tern Final number:");
        scanf("%f",&f);
        printf("Enter your Attendance number:");
        scanf("%f",&a);
        printf("Enter your Class Test 1 number:");
        scanf("%f",&c1);
        printf("Enter your Class Test 2 number:");
        scanf("%f",&c2);
        printf("Enter your Class Test 3 number:");
        scanf("%f",&c3);

        if(c1>=c2 && c2>=c3 || c1>=c3 && c2>=c3)
        {
            c=(c1+c2)/2.0;
        }
        else if(c2>=c3 && c3>=c1 || c2>=c1 && c3>=c1)
        {
            c=(c2+c3)/2.0;
        }
        else if(c1>=c2 && c3>=c2 || c1>=c3 && c3>=c2)
        {
            c=(c1+c3)/2.0;
        }


        num=t1+t2+f+a+c;


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

        printf("\n\n");

    }

    return 0;
}
