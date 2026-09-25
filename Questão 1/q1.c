#include <stdio.h>

const int ano_atual = 2026;

int main(void){

    printf("Digite o seu ano de nascimento: ");
    int ano_digitado;
    scanf("%d", &ano_digitado);

    printf("Você tem %d anos em %d!\n", ano_atual - ano_digitado, ano_atual);

    printf("Ano de nascimento: %d\n", ano_digitado);
    printf("Idade: %d\n", ano_atual - ano_digitado);

    return 0;

}