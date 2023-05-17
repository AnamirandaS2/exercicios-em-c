#include<stdio.h>
#include<math.h>
int main(){
    int A, B, C, resultado;
    printf("Digite valores para A, B e C \n");
    scanf("%d,%d,%d", &A, &B, &C);
    resultado = pow(A,2) + pow(B,2) + pow(C,2);
    printf("A soma dos quadrados de %d, %d e %d é %d \n", A,B,C,resultado);
    return 0;
}