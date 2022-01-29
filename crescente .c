#include <stdio.h>

int main()
{
    int x,y;

    do {
        printf("Digite dois numeros:\n");
        scanf("%d",&x);
        scanf("%d",&y);
    if (x < y){
            printf("CRESCENTE!\n");
         }
    else if (y>x){
            printf("DECRESCENTE!\n");
         }
    else if (y==x){

        printf("nao rsrsrs");
    }


   } while (x!= y);



    return 0;
}
