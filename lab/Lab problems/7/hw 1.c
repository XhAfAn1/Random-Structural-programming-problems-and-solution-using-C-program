/*
#include <stdio.h>
void swap(int a,int b)
{
      int temp;
      temp=a;
      a=b;
      b=temp;

    printf("After swap :\nA=%d\nB=%d",a,b);
}



int main()
{
    int a,b;

    printf("Input A : ");
    scanf("%d", &a);
    printf("Input B : ");
    scanf("%d", &b);

   printf("Before swap :\nA=%d\nB=%d\n",a,b);

    swap(a,b);

    return 0;
}
*/

#include <stdio.h>
void swap(int *p,int *q)
{
      int temp;
      temp=*p;
      *p=*q;
      *q=temp;
}



int main()
{
    int a,b;

    printf("Input A : ");
    scanf("%d", &a);
    printf("Input B : ");
    scanf("%d", &b);

    printf("Before swap :\nA=%d\nB=%d\n",a,b);

    swap(&a,&b);

    printf("After swap :\nA=%d\nB=%d",a,b);
    return 0;
}
