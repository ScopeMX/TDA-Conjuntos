#ifndef CONJUNTOS_H
#define CONJUNTOS_H

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;


int crear_vacio(Conjunto *A);

int es_vacio(Conjunto *A);
Conjunto *interseccion(Conjunto *A, Conjunto *B);

int factorial(int num);
int subconjuntosPotencia(int cardinalidad, int subCardinalidad);

Conjunto *potencia(Conjunto*A);
Conjunto *union_conjuntos(Conjunto*A, Conjunto *B);
void imprimir(Conjunto *A);
Conjunto eliminar(Conjunto *c, int e);
Conjunto *diferencia(Conjunto *a, Conjunto *b);

 #endif
