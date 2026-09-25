#include <stdio.h>

int main(void){

    printf("Imprimir código ASCII\n");
    printf("Digite um caractere: ");
    char caractere_digitado = getchar();

    printf("Código ASCII de %c: %d\n", caractere_digitado, caractere_digitado);


    return 0;

}