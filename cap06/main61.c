#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// fun��o principal
int main() {
    FILE *arq;
    int quant, a, b, c, d, e, f, i;
	
    // ajusta o programa para defini��es do local atual
    setlocale(LC_ALL, "");
	
	// leitura dos dados no arquivo
	quant = 0; // contador de linhas
	arq = fopen("numeros.txt", "rt");
	printf("arquivo aberto\n");
	// arquivo � lido enquanto seu fim n�o � alcan�ado
	while (fscanf(arq, "%d %d %d %d %d %d",
                    &a, &b, &c, &d, &e, &f) != EOF) {
		quant++; // incrementa contador de linha ap�s leitura
    	printf("linha %4d: %6d %6d %6d %6d %6d %6d\n",
                    quant, a, b, c, d, e, f);
	}
    fclose(arq);

    return 0;
}
