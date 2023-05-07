#include<stdio.h>
#include<math.h>
int main(){
    int A, B, resposta;
    printf("Insira dois números inteiros quaisquer: \n");
    scanf("%d,%d", &A, &B);
    resposta = pow((A/B),2);
    printf("O quadrado da divisão entre %d e %d é %d \n", A, B, resposta);
    return 0;

}