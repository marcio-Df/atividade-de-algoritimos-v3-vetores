#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int numero[10];
    int i;
    int pares = 0;
    int impares = 0;

    for(i = 0; i < 10; i++) {
        printf("Digite o %dº numero inteiro: ", i + 1);
        scanf("%d", &numero[i]);
    }

    for(i = 0; i < 10; i++) {
        if(numero[i] % 2 == 0) {
            pares++; 
        } else {
            impares++; 
        }
    }
    printf("\nQuantidade de numeros PARES: %d", pares);
    printf("\nQuantidade de numeros IMPARES: %d\n\n", impares);
    
    system("pause");
    return 0;
}
