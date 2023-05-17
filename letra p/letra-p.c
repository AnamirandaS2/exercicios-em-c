#include<stdio.h>
int main (){
    int salario_mensal, percentual_reajuste, novo_salario;
    printf("Digite o valor do salário mensal \n");
    scanf("%d",&salario_mensal);
    printf("Digite o valor do percentual de reajuste para o novo salário \n");
    scanf("%d", &percentual_reajuste);
    novo_salario= (salario_mensal + (salario_mensal*percentual_reajuste)/100);
    printf("O novo salário após o reajuste é %d \n", novo_salario);
    return 0;
}