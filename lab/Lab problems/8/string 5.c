#include<math.h>
int main()
{
    int i,f=0;
     char a[100];
     char ch;

    printf("Input 1st string: ");
    gets(a);

    printf("Enter a character: ");
    scanf("%c",&ch);

    for(i=0;a[i]!='\0';i++){
        if(a[i]==ch)
            f++;
    }
    printf("frequency of %c is: %d",ch,f);

}

