#include <stdio.h>

int main()
{
    int n;
    printf("n sayısını giriniz:\n");
    scanf("%d", &n);
    float toplam=0;
    for(int k=1;k<=n;k++)
    {
       toplam+=(k+1.0)/k;
    }
printf("%f \n",toplam);

return 0;
}