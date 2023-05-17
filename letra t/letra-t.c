#include<stdio.h>
int main (){
    int distancia, tempo, velocidade;
    printf("Digite a distância percorrida em km e o tempo gasto em minutos: \n");
    scanf("%d,%d", &distancia, &tempo);
    velocidade = (distancia * 1000) / (tempo*60);
    printf("A velocidade durante a viagem foi %d m/s \n", velocidade);
    return 0;
}