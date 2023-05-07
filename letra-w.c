#include<stdio.h>
int main(){
    int medida, conversao;
    printf("Insira uma medida em pés para ser convertida em cm: \n");
    scanf("%d", &medida);
    conversao = medida * 0.3048;
    printf(" A medida  de %d pés vale %d cm \n", medida, conversao);
    return 0;
}