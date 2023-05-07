#include<stdio.h>
#include<math.h>
int main (){
    float numero, indice, raiz;
    printf("Insira um número qualquer: \n");
    scanf("%f", &numero);
    printf("Insira um índice qualquer: \n");
    scanf("%f", &indice);
    raiz = pow(numero, (1.0/indice));
    printf("A raiz de índice %f do número %f é %f \n", indice, numero, raiz);
    return 0;
}