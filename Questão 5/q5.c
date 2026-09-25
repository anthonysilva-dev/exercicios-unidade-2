#include <stdio.h>

int main(void){
        float base, altura;
        printf("Digite, respectivamente, a base e a altura: ");
        scanf("%f %f", &base, &altura);

        printf("Área: %.2f\n", base * altura);
        printf("Perímetro: %.2f\n", 2 * (base + altura));

return 0;

}