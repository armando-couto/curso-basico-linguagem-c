#include <stdio.h>
#include <stdlib.h>

// estrutura auxiliar
typedef struct {
	double total;
	int quant;
} s_total;

// declara��o da fun��o Totalizador(double)
s_total* Totalizador(double);

int main() {			// fun��o principal
	double valor = 0;		// vari�vel de entrada
	while (1) {			// la�o para entrada de valores
		printf("Digite um valor (-1 encerra entrada): ");
		scanf("%lf", &valor);
		// se valor inv�lido encerra la�o
		if (valor<0) break;
		// chamada da fun��o para totaliza��o
		s_total* t = Totalizador(valor);
		// exibe total, quantidade de valores e m�dia
		printf("Total = %lf\tQuant = %d\tMedia = %lf\n",
		       t->total, t->quant, t->total/t->quant);
		free(t); // libera mem�ria
	}
	return 0;
}

// defini��o da fun��o Totalizador(double)
s_total* Totalizador(double valor) {
	static int quant = 0;		// vari�veis locais est�ticas
	static double total = 0;
	// conta n�mero de valores, acumulando-os
	total += valor;
	quant++;
	// cria din�micamente um elemento da estrutura
	s_total* tmp = (s_total*)malloc(sizeof(s_total));
	// ajusta campos do elemento
	tmp->total = total;
	tmp->quant = quant;
	return tmp; // retorna ponteiro da estrutura
}

