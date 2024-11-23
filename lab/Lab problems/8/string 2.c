#include<math.h>
int main()
{
    int i,j;
     char a[100]; char b[100];

    printf("Input 1st string: ");
    gets(a);

    for(i=0;a[i]!='\0';i++){
        b[i]=a[i];
    }

    printf("1st string: \n");
    printf("%s\n",a);
    printf("2nd string: \n");
    printf("%s",b);


}

