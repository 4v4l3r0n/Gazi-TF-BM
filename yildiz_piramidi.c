#include <stdio.h>

int main()
{
    int satir;
    printf("Satir sayisini giriniz.\n");
    scanf("%d",&satir);
    for (int a=0;a<satir;a++){
         
         for(int b = a;satir-b>0;b++){
            printf(" ");
         }
         for(int c=1;c<=(2*a+1);c++){
            printf("*");
         }
        printf("\n");

    }
return 0;
}