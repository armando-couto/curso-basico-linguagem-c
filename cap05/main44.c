#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// declara��o da fun��o 'Inverte(const char*)'
char* Inverte(const char*);

int main() {				// fun��o principal
    char palavra[256];		// declara string
    printf("Digite uma palavra: ");	// exibe mensagem
    scanf("%s", palavra);	// l� palavra
    char* invertida = Inverte(palavra);				// aciona fun��o
    printf("Palavra invertida: %s\n", invertida);	// exibe resultado
    return 0;
}
// defini��o da fun��o 'Inverte(const char*)'
char* Inverte(const char* str) {
    // vari�veis e tamanho da string recebida
    int i, j, tamanho = strlen(str);
    // aloca espa�o id�ntico para string invertida
    char *tmp = (char *)malloc((tamanho+1)*sizeof(char));
    // copia caracteres da string recebida na invertida
    // 1o para �ltimo, 2o para pen�ltimo, ...
    for(i=0, j=tamanho-1;i<tamanho;i++,j--) {
        tmp[j] = str[i];
    }
    tmp[tamanho] = '\0';	// finaliza string invertida
    return tmp;				// retorna a string invertida
}

