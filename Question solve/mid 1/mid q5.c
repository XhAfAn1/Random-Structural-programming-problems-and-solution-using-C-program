int main()
{
    int i,n;

    printf("Input the value of n:");
    scanf("%d",&n);

    printf("Number  square  cube\n");
    printf("=====================\n");


    for(i=0; i<=n; i++)
    {
        printf("%d       %d       %d\n",i,i*i,i*i*i);

    }


    return 0;
}
