#include <stdio.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

        int main ()
        {
            int n,i,cont,men;
            double media,total,porcent;


            printf("Quantas pessoas serao digitadas?");
            scanf("%d",&n);

            char nome[n][50];
            int idade [n];
            double altura [n];

            for (i=0; i<n; i++)
            {
                printf("Dados da %da pessoa:\n",i+1);
                printf("Nome: ");
                limpar_entrada();
                gets(nome[i]);
                printf("Idade: ");
                scanf("%d",&idade[i]);
                printf("Altura:");
                scanf("%lf",&altura[i]);
            }
            media = 0;
            cont = 0;
            printf("\nMEDIA DE ALTURA: ");
            for (i = 0; i < n; i++)
            {
                media = media + altura[i];
                cont = cont + 1.0;
            }
            total = media / cont;
            printf("%.2lf\n",total);

            men = 0;
            printf("Porcentagem de pessoas com menos de 16 anos: %%");
            for (i = 0; i<n; i++){
                if (idade[i]<16){
                    men = men + 1;
                }
            }

            porcent = ( men*100) / n;
             printf("%.1lf\n",porcent);

             for (i=0 ; i < n; i++){
                if (idade[i]<16){
                    printf("%s\n",nome[i]);
                }
             }

            return 0;
        }
