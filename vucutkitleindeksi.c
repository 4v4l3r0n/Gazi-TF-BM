#include <stdio.h>

int main()  
{  
    
    float boy, kilo, vki;  
  
    printf("Boyunuzu  giriniz (m).\n");  
    scanf("%f", &boy);  
  
    printf("Kilonuzu giriniz (kg).\n");  
    scanf("%f", &kilo);  

    vki = kilo / (boy * boy);
    
    printf("Vücut kitle indeksiniz (VKİ): %f\n", vki);  
  
    if(vki < 18.5)  
    {  
        printf("VKİ kategoriniz zayıftır.\n");  
    }  
    else if(vki >= 18.5 && vki <= 24.9)  
    {  
        printf("VKİ kategoriniz idealdir.\n");  
    }  
    else if(vki >= 25 && vki <= 29.9)  
    {  
        printf("VKİ kategoriniz şişmandır.\n");  
    }  
    else if(vki >= 30 && vki <= 34.9)  
    {  
        printf("VKİ kategoriniz obezdir.\n");  
    }  
    else if(vki >= 35)  
    {  
        printf("VKİ kategoriniz aşırı obezdir.\n");  
    }  
  
    return 0;  
}  