#include <stdio.h>

int main()
{
    int n,k,toplam;
    k=1;
    scanf("%d",n);
    for(k=1;k<=n;k++)
    {
       toplam=(k+1)/k;
       printf("%f \n",toplam);
    }


return 0;
}