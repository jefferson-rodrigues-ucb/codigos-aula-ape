#include <stdio.h>
#include <stdlib.h>

#include "complexo.h"

int main() {
    complexo a, b, r;
    char oper;

    printf("Digite a operacao: ");
    scanf("%f j%f %c %f j%f", &a.real, &a.imag, &oper, &b.real, &b.imag);

    switch (oper) {
        case '+':
            r = soma(a, b);
            break;
        case '-':
            r = subt(a, b);
            break;
        case '*':
            r = mult(a, b);
            break;
        case '/':
            r = divi(a, b);
            break;
        default:
            printf("Operacao invalida.");
    }
    printf("%.2f ,%.2f %c %.2f + j%.2f = %.2f j%.2f\n", a.real, a.imag, oper, b.real,
           b.imag, r.real, r.imag);
    exit(EXIT_SUCCESS);
}