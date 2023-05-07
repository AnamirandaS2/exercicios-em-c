#include<stdio.h>
#include<math.h>
int main(){
    int A, B, C, resultado;
    printf("Digite valores para A, B e C \n");
    scanf("%d,%d,%d", &A, &B, &C);
    resultado = pow(A+B+C,2);
    printf("O quadrado da soma entre %d, %d e %d é %d \n", A,B,C,resultado);
    return 0;
}