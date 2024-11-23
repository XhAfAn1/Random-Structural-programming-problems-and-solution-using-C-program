#include<stdio.h>
int main() {
int i,n,a[100],b[100],c[100];

printf("Input n:");
scanf("%d",&n);

for(i=0;i<n;i++) {
printf("Input number (%d): ",i+1);
scanf("%d",&a[i]);
}

for(i=0;i<n;i++) {
b[i]=pow(a[i],2);
}

for(i=0;i<n;i++) {
c[i]=pow(a[i],3);
}
printf("number      square        cube\n");
for(i=0;i<n;i++) {
printf("%d           %d             %d\n",a[i],b[i],c[i]);

}
}
