#include <stdio.h>

int main(void){
    
    int numero_digitado = 0;
    printf("Digite um número de três digitos: ");
    scanf("%d", &numero_digitado);

    printf("Centena: %d\n", numero_digitado / 100);
    printf("Dezena: %d\n", (numero_digitado / 10) % 10);
    printf("Unidade: %d\n", numero_digitado % 10);

    return 0;

}