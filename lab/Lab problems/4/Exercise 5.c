#include<stdio.h>
#include<math.h>

int main(){
    int y1,y2,i;

    printf("Enter the starting year :");
    scanf("%d",&y1);
    printf("Enter the ending year :");
    scanf("%d",&y2);

    if(y1<y2) {
    for(i=y1;i<=y2;i++) {

         if(((i%4==0) && (i%100!=0)) || (i%400==0)) {
            printf("%d ",i);
         }
    else
        continue;

    }
    }
    else
        printf("starting year should be less than ending year");
    return 0;
}
