#include <stdio.h>
int main(){
    int t, v;
    printf("Digite o valor do tempo gasto na viagem \n");
    scanf("%d",&t);
    printf("Digite o valor da velocidade média do carro \n");
    scanf("%d",&v);
    int d = t * v ;
    printf("A quantidade de litros usados na viagem é %d \n", d/12);
    return 0;
}