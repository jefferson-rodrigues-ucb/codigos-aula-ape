#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct num_complexo {
    float real;
    float imag;
} complexo_t;

complexo_t soma(complexo_t n1, complexo_t n2);
complexo_t subt(complexo_t n1, complexo_t n2);
complexo_t mult(complexo_t n1, complexo_t n2);
complexo_t divi(complexo_t n1, complexo_t n2);

#endif