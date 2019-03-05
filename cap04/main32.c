#include <stdio.h>

int main() {
    int x = 17580;		// vari�vel inteira simples
    int *p1 = &x;		// ponteiro de inteiro
    int **p2 = &p1;	// ponteiro de ponteiro de inteiro
    int ***p3 = &p2;	// ponteiro de ponteiro de ponteiro de inteiro

    // exibe vari�vel e endere�os contidos nos ponteiros
    printf("x = %5d p1:%p p2:%p p3:%p\n", x, p1, p2, p3);

    // altera vari�vel por meio dos ponteiros e exibe seu valor
    ***p3 = 2003;
    printf("x = %5d p1:%p p2:%p p3:%p\n", x, p1, p2, p3);
    **p2 = -20;
    printf("x = %5d p1:%p p2:%p p3:%p\n", x, p1, p2, p3);
    *p1 = 17580;
    printf("x = %5d p1:%p p2:%p p3:%p\n", x, p1, p2, p3);
    return 0;
}

