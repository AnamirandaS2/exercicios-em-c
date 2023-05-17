#include <stdio.h>
int main(){
    int c, l, h;
    printf("Digite o valor do comprimento \n");
    scanf("%d",&c);
    printf("Digite o valor da largura \n");
    scanf("%d",&l);
    printf("Digite o valor da altura \n");
    scanf("%d",&h);
    int v = c*l*h;
    printf("O valor do volume da caixa é %d \n", v);
    return 0;
}