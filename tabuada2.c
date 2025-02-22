#include <stdio.h>

int main() {
    int x;

    // Solicita o número da tabuada ao usuário
    printf("Digite o número da Tabuada: \n");
    scanf("%d", &x);

    // Exibe a tabuada de 0 a 10 usando um loop
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", x, i, x * i);
    }

    return 0;
}
