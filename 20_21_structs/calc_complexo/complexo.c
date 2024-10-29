#include "complexo.h"

#include <stdio.h>   // funções de entrada e saída de dados
#include <stdlib.h>  //fornece ferramentas para gerenciar memória, converter dados e executar operações relacionadas n1 processos

complexo soma(complexo n1, complexo b) {
    complexo total;
    total.real = n1.real + b.real;
    total.imag = n1.imag + b.imag;
    return total;
}
complexo subt(complexo n1, complexo b) {
    complexo total;
    total.real = n1.real - b.real;
    total.imag = n1.imag - b.imag;
    return total;
}
complexo mult(complexo n1, complexo b) {
    complexo total;
    total.real = n1.real * b.real - n1.imag * b.imag;
    total.imag = n1.real * b.imag + n1.imag * b.real;
    return total;
}
complexo divi(complexo n1, complexo b) {
    complexo total;
    float den = b.real * b.real + b.imag * b.imag;
    if (den == 0) {
        printf("Valor do divisor nao pode ser zero.");
        exit(EXIT_FAILURE);
    }
    total.real = (n1.real * b.real + n1.imag * b.imag) / den;
    total.imag = (n1.imag * b.real - n1.real * b.imag) / den;
    return total;
}