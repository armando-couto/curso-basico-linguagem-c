#include <stdio.h>

union u_variante {	// uni�o
    short valor_s;		// campo inteiro curto
    long valor_l;		// campo inteiro longo
    double valor_d;	// campo real de dupla precis�o
};

int main() {
    union u_variante v;	// declara uni�o
    v.valor_d = 0; 		// inicializa uni�o
    char resp;	// vari�vel auxiliar para resposta
    do {		// la�o que exibe todos os campos da uni�o
        printf("u_variante [ valor_s = %d, valor_l = %ld, valor_d = %lf]\n",
  		v.valor_s, v.valor_l, v.valor_d);
        // oferece alternativas para usu�rio
        printf("Alterar campo s|l|d ou (f)inalizar? ");
        fflush(stdin);
		scanf("%c", &resp);

        switch(resp) {	// efetua altera��o do campo escolhido
          case 'd':
          case 'D': printf("Novo valor_d = ?\b");
                    scanf("%lf", &v.valor_d);
                    break;
          case 'l':
          case 'L': printf("Novo valor_l = ?\b");
                    scanf("%ld", &v.valor_l);
                    break;
          case 's':
          case 'S': printf("Novo valor_s = ?\b");
                    scanf("%d", &v.valor_s);
                    break;
        }
    } while (resp!='f' && resp!='F');
    return 0;
}

