#include <stdio.h>

int main(void){

    float n1, n2, n3;
    printf("Digite, sequencialmente, 3 notas para verificar sua média: ");
    scanf("%f %f %f", &n1, &n2, &n3);
    float media = (n1 + n2 + n3) / 3;

    printf("Média das notas: %.2f", media);

    return 0;

}