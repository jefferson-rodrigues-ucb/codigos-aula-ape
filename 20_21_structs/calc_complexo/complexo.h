#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct num_complexo {
    float real;
    float imag;
} complexo;

complexo soma(complexo n1, complexo n2);
complexo subt(complexo n1, complexo n2);
complexo mult(complexo n1, complexo n2);
complexo divi(complexo n1, complexo n2);

#endif