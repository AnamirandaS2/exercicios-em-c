#include<stdio.h>
int main(){
    int quantidade_dolar, cotacao_dolar, reais;
    printf("Digite a quantidade de dólar na carteira \n");
    scanf("%d",&quantidade_dolar);
    printf("Digite o valor da cotação do dólar atual \n");
    scanf("%d", &cotacao_dolar);
    reais= quantidade_dolar * cotacao_dolar;
    printf("Convertendo seus dólares, você tem %d reais \n", reais);
    return 0;
}