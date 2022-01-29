#include <stdio.h>

int main()
{
    double valores,media,soma;
    int i,n, cont;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d",&n);

    double num[n];
    for (i=0 ; i <n; i++)
    {
        printf("Digite um numero:");
        scanf("%lf",&num[i]);
    }
    printf("VALORES:");
    for (i=0 ; i <n; i++)
    {
        printf("%.1lf  ",num[i]);
    }
    soma = 0;
    cont= 0;
    printf("\nSOMA: ");
    for (i= 0; i < n; i++)
    {
        soma = soma + num[i];
        cont = cont + 1.0;
    }
    printf("%.1lf\n ",soma);

    media =0;
    printf("MEDIA:");
    media = soma / cont;
    printf("%.1lf",media);

    return 0;


}
