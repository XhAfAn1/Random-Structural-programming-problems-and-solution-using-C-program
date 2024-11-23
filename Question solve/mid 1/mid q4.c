int main()
{
    int n1,n2,i,sum=0,c=0;
    printf("Input a pair of numbers:\n");
    printf("Input first number of the pair:");
    scanf("%d",&n1);
    printf("Input second number of the pair:");
    scanf("%d",&n2);

    for(i=n1;i<=n2;i++) {
        if(i%2==1) {
            sum=sum+i;
            c++;
        }
    }
    printf("List of odd numbers:%d\n",c);
    for(i=n1;i<=n2;i++) {
        if(i%2==1) {
            printf("%d\n",i);
        }
    }
        printf("sum=%d",sum);

    return 0;
}
