#include <stdio.h>  
int main()  
{  
    float ALES, YDS, Mezuniyet, ort;
    
    printf("ALES notunuzu giriniz.\n");
    scanf("%f", &ALES);

    printf("YDS notunuzu giriniz.\n");
    scanf("%f", &YDS);

    printf("Mezuniyet not ortalamanızı giriniz.\n");
    scanf("%f", &Mezuniyet);

    ort = ALES*0.50 + YDS*0.25 + Mezuniyet*0.25;
    printf("Not ortalamanız: %f.\n", ort);
    if(YDS<70)
    {
        printf("Başvurunuz reddedilmiştir.\n");
    }
    else if(ort>=60)
    {
        printf("Başvurunuz kabul edilmiştir.\n");
    }
    else
    {
        printf("Başvurunuz reddedilmiştir.\n");
    }
return 0;
}  