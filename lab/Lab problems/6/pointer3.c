int main ()
{
    int i,a[10],b[10],c[10],*p,j=0,k=0;

    printf("Enter 10 value :");
    p=&a[0];
    for(i=0; i<10; i++)
    {
        scanf("%d",(p+i));
    }
    p=&a[0];
    for(i=0; i<10; i++)
    {
        if(*(p+i)%2==0) {
            b[j]=*(p+i);
            j++;
        }
        if(*(p+i)%2==1) {
            c[k]=*(p+i);
            k++;
        }
    }

    printf("Even Numbers:\n");
    for(i=0; i<j; i++)
    {
        printf("%d ",b[i]);
    }
    printf("\nOdd Numbers:\n");
    for(i=0; i<k; i++)
    {
        printf("%d ",c[i]);
    }

    return 0;
}

/*

int main ()
{
    int i,a[10],b[10],c[10],*p,j=0,k=0;

    printf("Enter 10 value :");
    p=&a[0];
    for(i=0; i<10; i++)
    {
        scanf("%d",(p+i));
    }
    p=&a[0];
    for(i=0; i<10; i++)
    {
        if(*(p+i)%2==0) {
            b[j]=*(p+i);
            j++;
        }
        if(*(p+i)%2==1) {
            c[k]=*(p+i);
            k++;
        }
    }

    printf("Even Numbers:\n");
    p=&b[0];
    for(i=0; i<j; i++)
    {
        printf("%d ",*(p+i));
    }
    p=&c[0];
    printf("\nOdd Numbers:\n");
    for(i=0; i<k; i++)
    {
        printf("%d ",*(p+i));
    }

    return 0;
}

*/
