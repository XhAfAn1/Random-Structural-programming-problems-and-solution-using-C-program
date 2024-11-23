#include<stdio.h>
int main()
{
    int i,j,h,x[5],max,m[5][3],hm[5];

    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        max=m[i][0];
        for(j=0;j<3;j++)
        {

                if(m[i][j]>=max)
                {
                    max=m[i][j];
                    hm[i]=max;
                    x[i]=j;

                }
        }
    }
        for(i=0;i<5;i++)
            {
                {

                    printf("std-%d max-%d ",i+1,hm[i]);
                    if(x[i]==0)
                        printf("sub-chemistry\n");
                    else if(x[i]==1)
                        printf("sub-mathematics\n");
                    else if(x[i]==2)
                        printf("sub-physics\n");

                }
            }


}
