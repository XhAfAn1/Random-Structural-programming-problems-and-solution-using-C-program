#include<stdio.h>
int main () {
    int a,b,c,*p,*q,*r;
    p=&a;
    q=&b;
    r=&c;

    printf("Enter A: ");
    scanf("%d",p);
    printf("Enter B: ");
    scanf("%d",q);
    printf("Enter C: ");
    scanf("%d",r);

    if(*p > *q && *p > *r)
        printf("maximum: %d",*p);
    if(*q > *p && *q > *r)
        printf("maximum: %d",*q);
    else
       printf("maximum: %d",*r);

return 0;
}



/*

#include<stdio.h>
int main () {
    int i,a[3],*p,max,*m;
    p=&a[0];
//    m=%max;
    for(i=0;i<3;i++){
        printf("Enter number(%d)",i+1);
        scanf("%d",(p+i));
    }
    p=&a[0];
    for(i=0;i<3;i++){
        if(*p<a[i]) {
            p=&a[i];
        }
    }
    printf("maximum value is:%d",*p);
return 0;
}

*/
