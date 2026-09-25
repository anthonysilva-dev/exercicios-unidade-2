#include <stdio.h>

int main (void){

    int dividendo;
    int divisor;
    printf("Digite, em sequência, um dividendo e um divisor: ");
    scanf("%d %d", &dividendo, &divisor);

    printf("Quociente: %d\n", dividendo / divisor);
    printf("Resto: %d\n", dividendo % divisor);

    return 0;

}