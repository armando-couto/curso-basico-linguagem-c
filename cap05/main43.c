#include <stdio.h>

// tipo estrutura com parte inteira e fracion�ria de valor
typedef struct {
	long parteInteira;
	double fracao;
} s_numero;

// declara��o da fun��o Decompor(double)
s_numero Decompor(double);

int main() {			// fun��o principal
	double real;			// declara vari�vel
	printf("Digite um valor real: ");
	scanf("%lf", &real);		// l� valor
	// decompoe valor e retorna estrutura apropriada
	s_numero resultado = Decompor(real);
	// exibe resultado e encerra programa
	printf("I[%ld] F[%lf]\n", resultado.parteInteira, resultado.fracao);
	return 0;
}
// defini��o da fun��o 'Decompor(double)'
s_numero Decompor(double valor) {
	s_numero temp;			// estrutura auxiliar
	temp.parteInteira = (long)valor;	// separa parte inteira
	temp.fracao = valor - temp.parteInteira; // parte fracionaria
	return temp; // retorna resultado
}

