#include<stdio.h>
int main(){
    int A, B, C, D, M1, M2, M3, M4, M5, M6, S1, S2, S3, S4, S5, S6;
    printf("Digite o valor da variável A, B, C e D \n");
    scanf("%d, %d, %d, %d",&A,&B,&C,&D);
    M1 = A*B;
    M2 = A*C;
    M3 = A*D;
    M4 = C*B;
    M5 = C*D;
    M6 = D*B;
    S1 = A+B;
    S2 = A+C;
    S3 = A+D;
    S4 = C+B;
    S5 = C+D;
    S6 = D+B;
    printf("A multiplicação entre A e B é %d; A multiplicação entre A e C é %d; A multiplicação entre A e D é %d; A multiplicação entre B e C é %d; A multiplicação entre C e D é %d;    A multiplicação entre D e B é %d;", M1,M2,M3,M4,M5,M6);
    printf("A soma entre A e B é %d; A soma entre A e C é %d; A soma entre A e D é %d; A soma entre C e B é %d; A soma entre C e D é %d; A soma entre B e D é %d;", S1,S2,S3,S4,S5,S6);
    return 0;
}