#include <stdio.h>
#include <ctype.h>

int main() {
    char c; // declara��o de vari�vel
    // solicita��o de um caractere
    printf("Digite um caractere: "); scanf("%c",&c);

    c = toupper(c); // converte caractere para mai�scula
    switch(toupper(c)) {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': printf("Vogal '%c'\n", c);
              break;
        case 'J': printf("'J'ota\n");
              break;
        default:  printf("Caractere '%c'\n", c);
    }
    return 0;
}

