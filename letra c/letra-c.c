#include <stdio.h>
int main(){
    int r, h;
    printf("Digite o valor do raio da lata \n");
    scanf("%d",&r);
    printf("Digite o valor da altura da lata \n");
    scanf("%d",&h);
    int v = 3.14159 * (r*r) * h ;
    printf("O volume da lata de óleo é %d \n", v);
    return 0;
}