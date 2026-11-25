
#include <stdio.h>

int main() {

    int i, j, k;
    short int n;

    short int temps[50] = {};

    for (k = 0; k < 50; ++k) {
        printf("Escreva uma temperatura entre -100 e 100: ");
        scanf("%hd", &n);
        temps[k] = n;
    }

    float soma, media, cont;
    int acima;

    soma = 0, media = 0, acima = 0;

    for (i = 0; i < 50; ++i) {
        soma += temps[i];
    }

    media = soma/50;

    for (j = 0; j < 50; ++j) {
        if (temps[j] > media) {
            acima += 1;
        }
    }

    printf("Leituras acima da média calculada: %d\n", acima);


}