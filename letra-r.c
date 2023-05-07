#include<stdio.h>
int main(){
    int V1, V2, V3, VB1, VB2, VB3, VN1, VN2, VN3, numero_total, percentual_votos, percentual_V1, percentual_V2, percentual_V3, percentual_Votosnulos, percentual_Votosbrancos;
    printf("Digite as quantidades de votos válidos, brancos e nulos para os 3 canditados ");
    scanf("%d, %d, %d, %d, %d, %d, %d, %d, %d", &V1, &V2, &V3, &VB1, &VB2, &VB3, &VN1, &VN2, &VN3 );
    numero_total = V1 + V2 + V3 + VB1 + VB2 + VB3 + VN1 + VN2 + VN3;
    percentual_votos = ((V1 + V2 + V3)*100)/numero_total;
    percentual_V1 = (V1*100)/numero_total;
    percentual_V2 = (V2*100)/numero_total;
    percentual_V3 = (V3*100)/numero_total;
    percentual_Votosnulos = ((VN1+VN2+VN3)*100)/numero_total;
    percentual_Votosbrancos = ((VB1+VB2+VB3)*100)/numero_total;
    printf("O número total de eleitores = %d \n O percentual de votos = %d \n O percentual de votos do candidato 1 = %d \n O percentual de votos do candidato 2 = %d \n O percentual de votos nulos = %d \n O percentual de votos brancos = %d \n", numero_total, percentual_votos, percentual_V1, percentual_V2, percentual_V3, percentual_Votosnulos, percentual_Votosbrancos);
    return 0;
}