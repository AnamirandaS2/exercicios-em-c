#include<stdio.h>
int main(){
    int a;
    printf("Digite a temperatura em graus Celsius \n");
    scanf("%d",&a);
    int b = a*9/5 + 32;
    printf("Essa temperatura em graus Fahrenheit é %d \n", b);
    return 0;
}