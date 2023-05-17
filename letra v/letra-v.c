#include<stdio.h>
#include<math.h>
int main (){
    int potencia, base, expoente;
    printf("Digite um valor para a base e o expoente de uma potência: \n");
    scanf("%d, %d", &base, &expoente);
    potencia = pow(base, expoente);
    printf("A pontencia é %d \n", potencia);
    return 0;
}