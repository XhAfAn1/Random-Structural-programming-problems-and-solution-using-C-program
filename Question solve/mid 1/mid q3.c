int main()
{
    int bs,gs,hra,ta;
    printf("Enter basic salary:");
    scanf("%d",&bs);
    if(bs<=10000)
    {
        gs=bs+(bs*0.8)+(bs*0.2);
        printf("Gross salary is:%d",gs);
    }
    else if(bs>=10001 && bs<=20000)
    {
        gs=bs+(bs*0.9)+(bs*0.25);
        printf("Gross salary is:%d",gs);
    }
    else if(bs>=20001)
    {
        gs=bs+(bs*0.95)+(bs*0.30);
        printf("Gross salary is:%d",gs);
    }


    return 0;
}
