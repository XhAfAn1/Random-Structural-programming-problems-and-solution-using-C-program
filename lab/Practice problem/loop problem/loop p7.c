#include<stdio.h>

int main() {
int i,j,n1,n2,count;
scanf("%d %d",&n1,&n2);
for(i=n1;i<n2;i++) {
     count=0;
    for(j=2;j<i;j++){

        if(i%j==0){
            count++;
            break;
        }
    }
    if(count==0 && i!=1)
        printf("%d ",i);
}
}
