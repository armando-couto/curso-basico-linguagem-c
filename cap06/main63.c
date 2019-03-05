#include <stdio.h>
#include <locale.h>

// fun��o principal
int main() {
    FILE *arq;
    int quant, codigo;
    float preco;
    char descricao[41];

    // ajusta o programa para defini��es do local atual
    setlocale(LC_ALL, "");

    // leitura dos dados no arquivo
    quant = 0; // contador de linhas
    arq = fopen("lista.prod", "rt");
    // arquivo � lido enquanto seu fim n�o � alcan�ado
    while (fscanf(arq, "%d %f", &codigo, &preco) == 2) {
        fgets(descricao, 41, arq);
        quant++; // incrementa contador de linha ap�s leitura
        printf("linha %04d: %06d R$%8.2f %-40s \n",
                    quant, codigo, preco, descricao);
    }
    fclose(arq);

    return 0;
}

