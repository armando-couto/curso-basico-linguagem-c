#include <stdio.h>

int LeInteiro() {			// defini��o da fun��o
    int temp;				// declara��o de vari�vel inteira
    // exibi��o da mensagem e leitura da vari�vel
    printf("Digite um valor inteiro: ");
    scanf("%d", &temp);
    return temp;			// retorno do valor lido
}

int main() {				// defini��o da fun��o principal
    int quant;				// declara��o de vari�vel inteira
    quant = LeInteiro();	// chamada da fun��o e
 							// atribui��o do valor retornado
    printf("Valor lido: %d\n", quant);	// exibi��o do valor lido pela fun��o
    return 0;
}


