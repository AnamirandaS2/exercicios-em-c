#include<stdio.h>
int main(){
    int A,B, soma, subtracao, multiplicacao, divisao;
    printf("Insira dois valores: \n");
    scanf("%d,%d", &A, &B);
    soma = A+B;
    subtracao = A-B;
    multiplicacao = A*B;
    divisao = A/B;
    printf("A soma, a subtração, multiplicação e divisão entre %d e %d é, respectivamente, %d, %d, %d, %d \n", A, B, soma,subtracao,multiplicacao,divisao);
    return 0;
}