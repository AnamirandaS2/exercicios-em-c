#include<stdio.h>
#include<math.h>
int main (){
    int raio, volume;
    printf("Insira o valor do raio de uma esfera: \n");
    scanf("%d", &raio);
    volume = (4/3) * 3.14159 * pow(raio,3);
    printf("O volume dessa esfera de raio %d é %d \n", raio, volume);
    return 0;
}