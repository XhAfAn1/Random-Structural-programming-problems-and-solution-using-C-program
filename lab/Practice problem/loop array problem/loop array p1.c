#include<stdio.h>
int main() {
int a[100],b[6]={0,0,0,0,0,0},i;

for(i=0;i<100;i++) {
    printf("Enter the value of a[%d]: ",i);
    scanf("%d",&a[i]);

}
for(i=0;i<100;i++) {
    if(a[i]<0)
    b[0]++;

    if(a[i]>=0  && a[i]<=100)
    b[1]++;

    if(a[i]>=101  && a[i]<=200)
    b[2]++;

    if(a[i]>=201  && a[i]<=300)
    b[3]++;

    if(a[i]>=301  && a[i]<=400)
    b[4]++;

    if(a[i]>=401)
    b[5]++;


}

for(i=0;i<6;i++) {
    printf("Total numbers in range%d is %d ",i,b[i]);

}

return 0;
}
