#include <stdio.h>
// declara��es
int EPrimo(long);
int LeInteiro();

// fun��o principal
int main() {
	int quant, res;			// vari�veis
	// uso das fun��es
	quant = LeInteiro();
	res = EPrimo(quant);

	printf("Numero %d %s primo.\n", quant, (res==1 ? "e" : "nao e"));
	return 0;
}

// defini��es das fun��es
int LeInteiro() {
	int temp;			// vari�vel auxiliar
	// exibi��o da mensagem e leitura da vari�vel
	printf("Digite um valor inteiro: ");
	scanf("%d", &temp);
	return temp;			// retorno do valor lido
}
int EPrimo(long numero) {
	int primo = 1, div = 0;		// vari�veis auxiliares
	// la�o procura divisores de 2 at� n�mero/2
	for(div=2; div<=numero/2; div++) {
		if (numero%div==0) {	// verifica se div � divisor
			primo = 0;			// se tem divisor, n�mero n�o � primo
			break;				// interrompe la�o
		}
	} // se la�o n�o interrompido n�mero recebido � primo (primo = 1)
	return primo;	// retorno do resultado
}

