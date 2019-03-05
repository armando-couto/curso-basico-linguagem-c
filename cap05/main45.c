#include <stdio.h>

double var = 1;		// vari�vel global

double F1(double);	// declara��o de fun��o

// fun��o principal
int main() {
    double valor = 25;
    printf("F1(%lf) = %lf\n", valor, F1(valor));	// (1)
    printf("F1(%lf) = %lf\n", var, F1(var));		// (2)
    double var = 55; // oculta vari�vel global
    printf("F1(%lf) = %lf\n", var, F1(var));		// (3)
    return 0;
}

// defini��o da fun��o F1(double)
double F1(double var) { // oculta vari�vel global
    printf("parametro formal var = %lf\n", var);
    return 2*var;
}

