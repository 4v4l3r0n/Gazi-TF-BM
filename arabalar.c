#include <stdio.h>

int main(){
    char tip;
    int gun, km, ucret;
printf("Tasit turunuzu giriniz:\narazi icin a\nbinek icin b\nspor icin p\nstation icin s\n");
scanf("%c", &tip);
printf("Gun sayisini giriniz:\n");
scanf("%d", &gun);
printf("Kat edilen mesafeyi km cinsinden giriniz:\n");
scanf("%d", &km);
switch(tip){
    case 'a':
    case 'A': ucret = gun*20 + km*18;
    break;
    case 'b':
    case 'B': ucret = gun*32 + km*28;
    break;
    case 's':
    case 'S': ucret = gun*43 + km*28;
    break;
    case 'p':
    case 'P': ucret = gun*52 + km*36;
    break;
    default: printf("Lutfen dogru bir tasıt turu giriniz.");
}
printf("Odemeniz gereken tutar: %d$", ucret);

return 0;
}