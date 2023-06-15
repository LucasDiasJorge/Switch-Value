#include <stdio.h>

void trocarValor(int* valor) {
    int novoValor = 10;
    *valor = novoValor;  // Modifica o valor da variável original
}

int main() {
    int minhaVariavel = 5;
    printf("Valor original: %d\n", minhaVariavel);

    trocarValor(&minhaVariavel);  // Passa o endereço da variável

    printf("Valor modificado: %d\n", minhaVariavel);

    return 0;
}
