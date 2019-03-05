#include <stdio.h>
int globalInt = -3; // declara��o de vari�vel de escopo global

int main() {
    // declara��o de vari�vel de escopo local
    char letra = 'A';
    // uso das vari�veis
    printf("1. main()\nglobalInt = %d\nletra = %c\n\n",
        globalInt, letra);
    // declara��o de var�avel no "meio" de um bloco
    double tmp = 0.0293;
    printf("2. main()\nglobalInt = %d\nletra = %c\ntmp = %f\n\n",
        globalInt, letra, tmp);
    {   // bloco de c�digo interno a fun��o principal
        // define novo escopo ainda mais restrito
        float tmp = 10.5;
        char letra = 66;
        // uso das vari�veis
        globalInt = 13;
        printf("3. bloco\nglobalInt = %d\nletra = %c\ntmp = %f\n\n",
            globalInt, letra, tmp);
    } // fim do bloco
    // uso das vari�veis
    printf("4. main()\nglobalInt = %d\nletra = %c\ntmp = %f\n\n",
        globalInt, letra, tmp);
    return 0;
} // fim de main
// fim do programa

