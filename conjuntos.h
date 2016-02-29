#ifndef CONJUNTOS_H
#define CONJUNTOS_H

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;

int crear_vacio(Conjunto *A);

int factorial(int num);
int subconjuntosPotencia(int cardinalidad, int subCardinalidad);

Conjunto *potencia(Conjunto*A, Conjunto *p);

 #endif
