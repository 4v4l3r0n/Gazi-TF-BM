#include <stdio.h>

int main()
{
int sayi;
sayi=12421;

printf("sayi: %d\n", sayi);

int birler,onlar,yuzler,binler,onbinler;

birler=sayi%10;
printf("birler: %d\n", birler);
onlar=(sayi%100-birler)/10;
printf("onlar: %d\n", onlar);
yuzler=(sayi%1000-sayi%100)/100;
printf("binler: %d\n", yuzler);
binler=(sayi%10000)/1000;
printf("binler: %d\n", binler);
onbinler=sayi/10000;
printf("onbinler: %d\n", onbinler);

if(birler==onbinler && onlar==binler)
{
printf("Palindromdur");
}
else{
    printf("Palindrom değildir");
}

return 0;
}

