#include<stdio.h>
int main(){
    int A,B,C,D, produto, soma;
    printf("Digite quatro valores \n");
    scanf("%d,%d,%d,%d", &A,&B,&C,&D);
    produto = A*C;
    soma = B+D;
    printf("O produto entre %d e %d, e a soma entre %d e %d é, respectivamente, %d e %d \n", A, C, B, D, produto, soma);
    return 0;
}