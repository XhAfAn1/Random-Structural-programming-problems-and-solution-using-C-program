#include<stdio.h>
#include<math.h>

int main(){
    int A,Ah,Am,As,B,Bh,Bm,Bs;

    printf("Please Enter Ah =");
    scanf("%d", &Ah);
    printf("Please Enter Am =");
    scanf("%d", &Am);
    printf("Please Enter As =");
    scanf("%d", &As);
    printf("Please Enter Bh =");
    scanf("%d", &Bh);
    printf("Please Enter Bh =");
    scanf("%d", &Bm);
    printf("Please Enter Bh =");
    scanf("%d", &Bs);

   /* A=((Ah*3600)+(Am*60)+As);

    B=((Bh*3600)+(Bm*60)+Bs);


    if(A>B)
        printf("\nA takes more time.");
    else
        printf("\nB takes more time.");
*/

   if(Ah>Bh)
    printf("A takes more time.");
   else if(Bh>Ah)
    printf("B takes more time.");
   else if(Am>Bm)
    printf("A takes more time.");
   else if(Bm>Am)
    printf("B takes more time.");
   else if(As>Bs)
    printf("A takes more time.");
   else if(Bs>As)
    printf("B takes more time.");



    return 0;
}
