#include<math.h>
int main()
{
    int i,j;
     char a[100]; char b[100],la=0,lb=0;

    printf("Input 1st string: ");
    gets(a);

    printf("Input 2nd string: ");
    gets(b);

    for(i=0;a[i]!='\0';i++){
        la++;
    }

    for(j=0;b[j]!='\0';j++){
        lb++;
    }

    printf("length of 1st string: %d\n",la);
    printf("length of 1st string: %d",lb);

//     printf("length of 1st string: %d\n",i);
//    printf("length of 1st string: %d",j);


}

