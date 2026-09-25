#include <stdio.h>

int main(void){

    printf("Verificar se um número é par e positivo\n");
    int numero_digitado = 0;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero_digitado);

    printf("Par e positivo? %d", numero_digitado % 2 == 0 && numero_digitado > 0);

    return 0;

}