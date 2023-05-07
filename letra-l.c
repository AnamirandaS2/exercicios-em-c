#include<stdio.h>
int main(){
    int quantidade_reais, cotacao_dolar, dolar;
    printf("Digite a quantidade de reais na carteira \n");
    scanf("%d",&quantidade_reais);
    printf("Digite o valor da cotação do dólar atual \n");
    scanf("%d", &cotacao_dolar);
    dolar= quantidade_reais / cotacao_dolar;
    printf("Convertendo seus reais, você tem %d doláres \n", dolar);
    return 0;
}