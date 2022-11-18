#include <stdio.h>

int main(){
int arac, satis=0, renault, R, mazda, M, honda, H, ford, F;
while(arac != 111){
    printf("Programdan cikmak icin marka kodu olarak 111 giriniz.\n");
    printf("Arac marka kodunu giriniz. Renault: 1 Mazda: 2 Honda: 3 Ford: 4\n");
    scanf("%d", &arac);
    if(arac!=111){
        printf("Satis tutarini giriniz:\n");
        scanf("%f", &satis);
        switch(arac){
        case 1: renault++ , R += satis; break;
        case 2: mazda++ , M += satis; break;
        case 3: honda++ , H += satis; break;
        case 4: ford++ , F += satis; break;
        default: printf("Lutfen gecerli bir kod giriniz.");
        }
    }
}
    if(renault > mazda && renault > honda && renault > ford)
        printf("En cok satis yapilan marka: Renault\n");
    if(mazda > renault && mazda > honda && mazda > ford)
        printf("En cok satis yapilan marka: Mazda\n");
    if(honda > renault && honda > mazda && honda > ford)
        printf("En cok satis yapilan marka: Honda\n");
    if(ford > renault && ford > honda && ford > mazda)
        printf("En cok satis yapilan marka: Ford\n");
    if(R > M && R > H && R > F)
        printf("En yuksek miktarda satis yapilan marka: Renault\n");
    if(M > R && M > H && M > F)
        printf("En yuksek miktarda satis yapilan marka: Mazda\n");
    if(H > M && H > R && H > F)
        printf("En yuksek miktarda satis yapilan marka: Honda\n");
    if(F > M && F > H && F > R)
        printf("En yuksek miktarda satis yapilan marka: Ford\n");

return 0;
}