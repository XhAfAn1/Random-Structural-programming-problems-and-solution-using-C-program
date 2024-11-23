#include<stdio.h>
int main() {
int i,x,a[20];
printf("Input number of elements in the array:");
scanf("%d",&x);
for(i=0;i<x;i++){
    a[i]=i;
}
for(i=0;i<=x;i++){
    if(i%2==0) {
        a[i]=a[i]*3;
    }
}
for(i=0;i<x;i++){
   printf("%d ",a[i]);
}
return 0;
}
