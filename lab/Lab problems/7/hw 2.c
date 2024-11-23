#include <stdio.h>
void print_array(int a[],int n)
{
  int i;
  for(i=0;i<n;i++) {
        printf("%d ",a[i]);
    }
}



int main()
{
    int i,a[100],n;

    printf("Input data size: ");
    scanf("%d", &n);
    printf("Input data: ");
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }

    print_array(a,n);

    return 0;
}


