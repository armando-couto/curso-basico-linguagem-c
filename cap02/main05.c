#include <stdio.h>

int valorGlobal = 33; // declara��o de vari�vel escopo global

int main() {
    // bloco de c�digo da fun��o principal define
    // um escopo pr�prio, mais restrito que o global
    // vari�vel valorGlobal est� dentro de seu escopo
    printf("(1) valorGlobal = %d\n", valorGlobal);

    {   // bloco de c�digo interno a fun��o principal
        // mais restrito que os escopos externos
        // vari�vel valorGlobal est� dentro de seu escopo
        printf("(2) valorGlobal = %d\n", valorGlobal);
    }
    return 0;
}

