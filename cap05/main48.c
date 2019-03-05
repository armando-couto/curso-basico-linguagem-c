#include <stdio.h>

void Troca(double*, double*); 			// declara��o da fun��o

int main() { 							// fun��o principal
    double a, b;						// declara vari�veis
    printf("Digite dois valores: ");	// exibe mensagem
    scanf("%lf %lf", &a, &b);			// leitura das vari�veis
    printf("Valores dados: a = %lf  b = %lf\n", a, b);
    Troca(&a, &b);						// chama fun��o
    printf("Valores trocados: a = %lf  b = %lf\n", a, b);
    return 0;							// encerra programa
}

void Troca(double *a, double *b) { 		// defini��o da fun��o
    double aux = *a;					// armazena valor de a em aux
    *a = *b;							// armazena valor de b em a
    *b = aux;							// armazena valor de aux (=a) em b
}

