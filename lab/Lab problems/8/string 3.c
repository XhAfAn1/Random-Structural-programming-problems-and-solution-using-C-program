#include<math.h>
int main()
{
    int i,j;
     char a[100]; char b[100];

    printf("Input 1st string: ");
    gets(a);

    printf("Input 2nd string: ");
    gets(b);

    for(i=0;a[i]!='\0';i++){
        a[i];
    }

    for(j=0;b[j]!='\0';i++,j++){
        a[i]=b[j];
    }
    a[i] = '\0';
    printf("%s",a);

}

