#include <stdio.h>
#include <math.h>

int main() {
    float raio; // declara uma vari�vel raio
    float area; // declara uma vari�vel area

    printf("Area da Circunferencia\n");
    printf("Digite o valor do raio: "); // exibe mensagem
    scanf("%f", &raio); // efetua leitura da vari�vel raio

    area = M_PI * raio * raio; // efetua c�lculo da �rea

    printf("Area = %f\n", area); // exibe resultado
    return 0;
}

