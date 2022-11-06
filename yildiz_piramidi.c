#include <stdio.h>
int main() {
   int a, bosluk, satir, b = 0;
   printf("Satır sayısını giriniz: ");
   scanf("%d", &satir);
   for (a = 1; a <= satir; ++a, b = 0) {
      for (bosluk = 1; bosluk <= satir - a; ++bosluk) {
         printf("  ");
      }
      while (b != 2 * a - 1) {
         printf("* ");
         ++b;
      }
      printf("\n");
   }
   return 0;
}