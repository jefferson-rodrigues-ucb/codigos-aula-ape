#include "complexo.h"

#include <stdio.h>   // funções de entrada e saída de dados
#include <stdlib.h>  //fornece ferramentas para gerenciar memória, converter dados e executar operações relacionadas n1 processos

complexo_t soma(complexo_t n1, complexo_t b) {
    complexo_t total;
    total.real = n1.real + b.real;
    total.imag = n1.imag + b.imag;
    return total;
}
complexo_t subt(complexo_t n1, complexo_t b) {
    complexo_t total;
    total.real = n1.real - b.real;
    total.imag = n1.imag - b.imag;
    return total;
}
complexo_t mult(complexo_t n1, complexo_t b) {
    complexo_t total;
    total.real = n1.real * b.real - n1.imag * b.imag;
    total.imag = n1.real * b.imag + n1.imag * b.real;
    return total;
}
complexo_t divi(complexo_t n1, complexo_t b) {
    complexo_t total;
    float den = b.real * b.real + b.imag * b.imag;
    if (den == 0) {
        printf("Valor do divisor nao pode ser zero.");
        exit(EXIT_FAILURE);
    }
    total.real = (n1.real * b.real + n1.imag * b.imag) / den;
    total.imag = (n1.imag * b.real - n1.real * b.imag) / den;
    return total;
}