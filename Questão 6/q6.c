#include <stdio.h>

int main(void){

    float raio_circulo = 0;
    float pi = 3.14159;

    printf("Exibir a area do circulo\n");
    printf("Digite o raio do circulo: ");
    scanf("%f", &raio_circulo);

    printf("Area do circulo: %.2f\n", pi * (raio_circulo * raio_circulo));

    return 0;

}