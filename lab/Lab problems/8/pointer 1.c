#include<string.h>
int main ()
{
int i,a,*p;
double b,*q;
char c[100]="i want to die fr T.T",*r;
p=&a;
q=&b;
r=&c[0];
printf("Enter the value of Int :");
scanf("%d",p);
printf("Enter the value of Double :");
scanf("%lf",q);
//printf("Enter the string :");
//gets(c);

printf("The value of Int: %d\n",*p);
printf("The adress of Int: %p\n",p);
printf("\n\n");
printf("The value of Double: %lf\n",*q);
printf("The adress of Double: %p\n",q);

for(i=0;c[i]!='\0';i++){
    printf("Value of string(%d):%c \n",i+1,*(r+i));
}
printf("\n\n");
for(i=0;c[i]!='\0';i++){
    printf("Adress of string(%d)%p \n",i+1,(r+i));
}

    return 0;
}
