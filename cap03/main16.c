#include <stdio.h>

int main() {
	// declara��o e inicializa��o de vari�veis
	unsigned char c = 33; // primeiro caractere a ser exibido
	int i = 0;            // contador de caracteres por linha
	printf("Caracteres ASCII 33 ao 122\n");

laco: // r�tulo para forma��o de la�o
	printf("%c %3d| ", c, c); // exibe caractere e seu c�digo
	i++;
	c++;   // incrementa o contador de caracteres e o caractere
	// se i � m�ltiplo de 10 pula linha
	if (i%10==0) {
		printf("\n");
	}
	// se caractere ainda n�o � o 122 'salta' para r�tulo 'laco'
	if (c<=122) {
		goto laco;
	}
	return 0;
}


