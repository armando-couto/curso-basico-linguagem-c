#include <stdio.h>

double Soma(double, double);			// declara��o da fun��o

int main() {							// fun��o principal
	double a, b;						// declara vari�veis
	printf("Digite dois valores: ");	// exibe mensagem
	scanf("%lf %lf", &a, &b); 		// leitura das vari�veis
	// chama fun��o e exibe resultado
	printf("%lf + %lf = %lf\n", a, b, Soma(a, b));
	return 0;
}

double Soma(double a, double b) {		// defini��o da fun��o
	return a + b; // retorna soma dos argumentos recebidos
}

