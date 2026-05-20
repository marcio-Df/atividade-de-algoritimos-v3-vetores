#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero[10];
    int i;
    int soma = 0;
    float media;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i + 1);
        scanf("%d", &numero[i]);
    }
    for(i = 0; i < 10; i++) {
        soma = soma + numero[i];
    }
    media = (float)soma / 10;

    printf("\nA media dos valores e: %.2f\n\n", media);

    system("pause");
    return 0;
}
