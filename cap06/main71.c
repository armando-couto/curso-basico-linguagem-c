#include <stdio.h>

// estrutura para cliente
typedef struct {
    long codigo;
    char nome[50];
} s_cliente;

int main() {
    FILE *arq; // arquivo
    s_cliente cliente; // declara��o da estrutura
    long reg; // n�mero do registro desejado

    // abertura do arquivo modo de leitura bin�ria
    if ((arq = fopen("clientes.dat", "rb")) == NULL) {
        printf("Erro na abertura do arquivo.\n");
        return -1;
    }
    // obten��o de registro aleat�rio
    do {
        printf("Numero do registro [0 para sair]: ");
        scanf("%ld", &reg);
        if (reg != 0) {
            // localiza��o do registro
            if (fseek(arq, (reg-1)*sizeof(s_cliente), SEEK_SET) != 0) {
               printf("Erro na localizacao do registro.\n");
               return -2;
            }
            // leitura do registro
            if (fread(&cliente, sizeof(s_cliente), 1, arq) != 1) {
               printf("Erro na leitura do registro.\n");
               return -3;
            }
            // exibi��o dos dados
            printf("%8ld | %s\n", cliente.codigo, cliente.nome);
        }
    } while (reg != 0);
    // fechamento do arquivo
    fclose(arq);

    return 0;
}

