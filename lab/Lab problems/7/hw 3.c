float average(int a[],int n) {
int i,sum=0;
float avg;

for(i=0; i<n; i++)
    {
        sum=sum+a[i];
    }
    avg=(float)sum/n;

return  avg;
}


int main ()
{
    int i,a[10],b[10],n,j;
    float avg;
    printf("how many value u want to store :");
    scanf("%d",&n);
    printf("Enter %d value :",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

   avg=average(a,n);

    printf("average of the array values: %.2f\n",avg);

    for(i=0; i<n; i++)
    {
        if(a[i]!=avg){
                j=a[i]-avg;
                j=abs(j);
            printf("Difrence of element-%d is: %d\n",i+1,j);
        }

        else
            printf("Difrence of element-%d is: 0\n",i+1);
    }



    return 0;
}
