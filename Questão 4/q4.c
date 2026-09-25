#include <stdio.h>

int main(void){
    
    float num_celsius;
    printf("Digite uma temperatura em graus celsius (°C): ");
    scanf("%f", &num_celsius);

    float fahrenheit = num_celsius * (9.0 / 5) + 32;
    printf("Temperatura em Fahrenheit: %.1f\n", fahrenheit);

    return 0;

}