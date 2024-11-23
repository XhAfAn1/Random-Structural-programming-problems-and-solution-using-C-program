int main ()
{
    int i,a[10],b[10],*p,*q,n,sum=0,j;
    float avg;
    printf("how many value u want to store :");
    scanf("%d",&n);
    printf("Enter %d value :",n);
    p=&a[0];
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    p=&a[0];
    for(i=0; i<n; i++)
    {
        sum=sum+*(p+i);
    }
    avg=(float)sum/n;

    printf("average of the array values: %f\n",avg);

    for(i=0; i<n; i++)
    {
        if(*(p+i)>avg){
                j=*(p+i)-avg;
            printf("Difrence of element-%d is: %d\n",i+1,j);
        }
        else if(*(p+i)<avg){
             j=avg-*(p+i);
            printf("Difrence of element-%d is: %d\n",i+1,j);
        }
        else
            printf("Difrence of element-%d is: 0\n",i+1);
    }



    return 0;
}

/*
int main ()
{
    int i,a[10],b[10],*p,*q,n,sum=0,j;
    float avg;
    printf("how many value u want to store :");
    scanf("%d",&n);
    printf("Enter %d value :",n);
    p=&a[0];
    for(i=0; i<n; i++)
    {
        scanf("%d",(p+i));
    }
    p=&a[0];
    for(i=0; i<n; i++)
    {
        sum=sum+*(p+i);
    }
    avg=(float)sum/n;

    printf("average of the array values: %f\n",avg);

    for(i=0; i<n; i++)
    {
        if(*(p+i)!=avg){
                j=*(p+i)-avg;
                j=abs(j);
            printf("Difrence of element-%d is: %d\n",i+1,j);
        }

        else
            printf("Difrence of element-%d is: 0\n",i+1);
    }



    return 0;
}
*/
