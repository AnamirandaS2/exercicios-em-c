#include <stdio.h>
int main(){
    int v, ta, te;
    printf("Digite o valor da prestação \n");
    scanf("%d",&v);
    printf("Digite o valor da taxa \n");
    scanf("%d",&ta);
    printf("Digite o valor do tempo \n");
    scanf("%d",&te);
    int p = v + (v*(ta/100)*te);
    printf("O valor de uma prestação de um bem em atraso é %d \n", p);
    return 0;
}
