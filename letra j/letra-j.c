#include<stdio.h>
#include<math.h>
int main(){
    int A, B, resultado;
    resultado = pow((A-B),2);
    printf("Digite um valor para A e para B \n");
    scanf("%d , %d", &A, &B);
    printf("O quadrado da diferença entre %d e %d é %d", A, B, resultado);
    return 0;
}
