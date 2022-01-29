#include <string.h>
#include <stdio.h>

int main()
{
  double media,total, cont;
  int x;


  printf("Digite as idades:");
  scanf("%d",&x);
 media = 0;
  cont = 0;

   while (x >= 0){
    media = media + x;
    cont = cont + 1;
    scanf("%d",&x);}

  if (cont == 0){
    printf("IMPOSSIVEL CALCULAR");
}
else {
total = media / cont;
printf("MEDIA = %.2lf",total);
}


  return 0;
}
