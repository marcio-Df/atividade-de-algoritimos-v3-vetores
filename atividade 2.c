#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int v1[10];
    int v2[10];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Digite o valor para v1 %d: ", i);
        scanf("%d", &v1[i]);
    }
    for(i = 0; i < 10; i++) {
        v2[i] = v1[9 - i]; 
    }
    printf("\nVetor v1 original: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", v1[i]);
    }
    printf("\nVetor v2 invertido: ");
    for(i = 0; i < 10; i++) {
        printf("%d ", v2[i]);
    }
    printf("\n\n");

    system("pause");
    return 0;
}
