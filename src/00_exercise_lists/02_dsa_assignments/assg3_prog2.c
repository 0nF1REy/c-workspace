#include <stdio.h>

struct Distance
{
   int km;
   int m;
} d1, d2, result;

int assg3prog2()
{
   // Entrada da primeira distancia
   printf("Digite a 1a distancia\n");
   printf("Digite em km: ");
   scanf("%d", &d1.km);
   printf("Digite em metros: ");
   scanf("%d", &d1.m);

   // Entrada da segunda distancia
   printf("\nDigite a 2a distancia\n");
   printf("Digite em km: ");
   scanf("%d", &d2.km);
   printf("Digite em metros: ");
   scanf("%d", &d2.m);

   // Somando as distancias
   result.km = d1.km + d2.km;
   result.m = d1.m + d2.m;

   while (result.m >= 1000)
   {
      result.m = result.m - 1000;
      ++result.km;
   }
   printf("\nSoma das distancias = %d km e %d m ", result.km, result.m);

   return 0;
}
