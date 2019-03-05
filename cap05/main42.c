#include <stdio.h>
#include <stdlib.h>
const int TAM = 10;	// constante para tamanho do arranjo
int* ObtemArranjo(int);	// declara��o de fun��o

int main() {		// fun��o principal
	int i;			// vari�vel auxiliar
	int* arranjo;		// ponteiro para arranjo de inteiros
	arranjo = ObtemArranjo(TAM); // l� arranjo de tamanho TAM
	printf("[ ");		// exibe arranjo obtido
	for(i=0; i<TAM-1; i++) {
		printf("%d, ", arranjo[i]);
	}
	printf("%d ]\n", arranjo[i]);
	free(arranjo);		// libera mem�ria alocada
	return 0;
}

// defini��o da fun��o ObtemArranjo(int)
int* ObtemArranjo(int tamanho) {
	int i;			// vari�vel auxiliar
	int* tmp = (int*)malloc(tamanho*sizeof(int));	// aloca��o do arranjo
	for(i=0; i<tamanho; i++) { // la�o para leitura de valores
		printf("Valor[%d] ?\b", i);
		scanf("%d", tmp+i);
	}
	return tmp; // retorna arranjo
}

