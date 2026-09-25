#include <stdio.h>

int main (void){

    int total_segundos = 0;
    printf("Digite um total em segundos para ser decomposto: ");
    scanf("%d", &total_segundos);

    printf("%dh, %dmin %ds", total_segundos/3600, (total_segundos%3600)/60, total_segundos%60);

    return 0;

}