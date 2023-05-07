#include<stdio.h>
int main(){
    int a;
    printf("Digite a temperatura em graus Fahrenheit \n");
    scanf("%d",&a);
    int b = ((a -32) * 5)/9;
    printf("Essa temperatura em graus Celsius é %d \n", b);
    return 0;
}