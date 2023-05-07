#include<stdio.h>
#include<math.h>
int main(){
    int raio, area;
    printf("Digite o valor do raio de um círculo \n");
    scanf("%d", &raio);
    area = 3.14 * pow(raio,2);
    printf("A área desse círculo com raio %d é %d \n", raio, area);
    return 0;
}