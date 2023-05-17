#include<stdio.h>
int main(){
    int numero, antecessor, sucessor;
    printf("Insira um número qualquer: \n");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("O antecessor desse número é %d e o sucessor é %d \n", antecessor, sucessor);
    return 0;
    
}