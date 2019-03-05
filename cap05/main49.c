#include <stdio.h>
#include <stdlib.h>

// declara��o das fun��es
int* ObtemArranjo(int tamanho);
int Maior(const int*, int);

int main() {				// fun��o principal
	int tam, posMaior, *v;			// declara vari�veis
	printf("Qual tamanho do arranjo? ");
	scanf("%d", &tam);			// l� tamanho do arranjo
	v = ObtemArranjo(tam);		// fun��o aloca e l� arranjo
	posMaior = Maior(v, tam);		// fun��o acha posi��o do maior
	printf("Maior valor %d localizado na posicao %d.\n",
	       v[posMaior], posMaior);
	return 0;
}

// defini��o das fun��es
int* ObtemArranjo(int tamanho) {
	int i;
	int *tmp = (int *)malloc(tamanho*sizeof(int));	// aloca arranjo
	for(i=0; i<tamanho; i++) {		// la�o para leitura de valores
		printf("Valor[%d] ?\b", i);
		scanf("%d", tmp+i);
	}
	return tmp;				// retorna arranjo
}

int Maior(const int arranjo[10], int tamanho) {
	int i, posMaior = 0;		// 'assume' que maior valor na 1a. posi��o
	for (i=0; i<tamanho; i++) {	// la�o percorre demais posi��es
		// verifica se posi��o maior que posMaior e atualiza se necess�rio
		if (arranjo[i]>arranjo[posMaior]) {
			posMaior = i;
		}
	}
	return posMaior; // retorna posi��o do maior elemento
}

