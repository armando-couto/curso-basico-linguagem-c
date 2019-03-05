#include <stdio.h>

int main(int argc, char *argv[]) {
    FILE *arq;
    if(argc < 2) {	// verifica presen�a de argumento
        printf("Erro! Falta suprir nome de arquivo!");
        return -1;	// encerra com erro
    }
    // testa abertura do arquivo
    // cujo nome foi dado como argumento
    arq = fopen(argv[1], "r");
    if(arq != NULL) {
        printf("arquivo existe");
    } else {
        // arquivo n�o existe, ent�o � criado
        arq = fopen(argv[1], "w");
        if (arq == NULL) {
            printf("erro ao criar arquivo");
            return -2;	// encerra com erro
        }
        printf("arquivo criado");
    }
    fclose(arq);	// fecha o arquivo aberto/rec�m criado
    // encerramento do programa
    return 0;
}

