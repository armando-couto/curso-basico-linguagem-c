#include <stdio.h>
// declara��o da fun��o ConverteCparaF(double)
double ConverteCparaF(double);

int main() {				// fun��o principal
    double tempC, tempF;			// declara vari�veis
    printf("Temperatura em graus Celsius: ");
    scanf("%lf", &tempC);			// l� temperatura C
    tempF = ConverteCparaF(tempC);	// convers�o da temperatura
    // exibe resultado e encerra programa
    printf("%7.2lf'C equivalem a %7.2lf'F\n", tempC, tempF);
    return 0;
}

// defini��o da fun��o ConverteCparaF(double)
double ConverteCparaF(double celsius) {
    double fahrenheit;				// declara vari�vel
    fahrenheit = celsius*9/5+32;		// efetua convers�o
    return fahrenheit;				// retorna resultado
}

