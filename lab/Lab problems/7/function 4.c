#include <stdio.h>
float f(int x, int y)
{
      float z;
      if(x>y){
        z=x*x-4*y;
      }
      else if(x<y){
        z=x*x+4*y;
      }
      else
        z=pow((x+y),0.75);
return z;

}



int main()
{
    int x,y;
    float z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);

    z=f(x,y);
    printf("Value of z is: %.2f",z);

    return 0;
}

