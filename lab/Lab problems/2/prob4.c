#include<stdio.h>
#include<math.h>

int main(){
   float x1,x2,y1,y2,distance;

    printf("Enter Point X1:\n");
    scanf("%f",&x1);
    printf("Enter Point X2:\n");
    scanf("%f",&x2);
    printf("Enter Point Y1:\n");
    scanf("%f",&y1);
    printf("Enter Point Y2:\n");
    scanf("%f",&y2);
    distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    //distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));  	

    printf("distance:%f",distance);

    return 0;
}

