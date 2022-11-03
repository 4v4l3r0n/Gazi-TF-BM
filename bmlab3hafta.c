#include <stdio.h>

int main() 
{
   printf("Hello, World! \n");
   printf("\tGazi TG BM \n");
   int number=78;
   printf("sayımız %d \n", number);
   printf("sayımız %x \n",number);
   printf("sayımız %o \n",number);

   int number2=0116;
   printf("İkinci Sayımız %d \n", number2); //10'luk sistem için %d (decimal)
   printf("İkinci Sayımız %x \n", number2); //16'lık sistem için %x (Hexadecimal)
   printf("İkinci Sayımız %o \n", number2); //8'lik sistem için %o (Oktav)

/*
değişken tanımlarken sayıyla başlanmaz
_ dışında özel karakter kullanılmaz
türkçe karakter kullanılmaz
özel tanımlı fonksiyonlar değişken adı olarak kullanılamaz
*/

   return 0;
}