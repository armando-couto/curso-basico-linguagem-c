#include <stdio.h>

int main() {
    int i;  // declara��o da vari�vel contador
    printf("Contagem regressiva\n");

    // leitura do valor inicial
    printf("Digite um valor inteiro positivo: ");
    scanf("%d", &i);
    while (i>0) {		// la�o condicional while
        printf("%d, ", i);	// exibe valor da contagem
        i--;			// decrementa vari�vel
    }
    printf("Fim.\n");
    return 0;
}

