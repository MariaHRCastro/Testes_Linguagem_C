#include <stdio.h>

int main ()
{
    int n;
    int x,i;

  printf("Quantos numeros voce vai digitar?\n");
  scanf("%d",&n);

  int vet[n];

  for (i=1; i <= n; i++){
    printf("Digite um numero:");
    scanf("%d",&vet[i]);
  }
  printf("NUMEROS NEGATIVOS:\n");
  for (i=0;i <= n; i++){
    if (vet[i]< 0){
        printf("%d\n",vet[i]);
    }
  }
  return 0;
}
