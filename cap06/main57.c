#include<stdio.h>

int main() {
    FILE *arq;
    char ch;
    // abertura do arquivo
    arq = fopen("meu_arquivo.txt", "r");
    // la�o para leitura do arquivo e exibi��o no console
    do {
        ch = fgetc(arq);	// l� caractere do arquivo
        printf("%c",ch);	// exibe caractere no console
    } while(!feof(arq));
    // fechamento do arquivo
    fclose(arq);
    // encerramento do programa
    return 0;
}

