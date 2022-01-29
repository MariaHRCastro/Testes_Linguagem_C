#include <stdio.h>

int main()
{
    int i,n,total;

 printf("Deseja a tabuada para qual valor?");
 scanf("%d",&n);

 for (i=1; i <= 10; i++){
    total = n * i;
    printf(" %d X %d = %d\n",n,i,total);

 }

 return 0;

}
