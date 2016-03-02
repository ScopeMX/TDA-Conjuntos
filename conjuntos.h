#ifndef CONJUNTOS_H
#define CONJUNTOS_H

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;


int crear_vacio(Conjunto *A);

int es_vacio(Conjunto *A);
int interseccion(Conjunto *A, Conjunto *B, Conjunto *res);

int factorial(int num);
int subconjuntosPotencia(int cardinalidad, int subCardinalidad);

int potencia(Conjunto*A, Conjunto **h);
int union_conjuntos(Conjunto*A, Conjunto *B, Conjunto *Union);
void imprimir(Conjunto *A);
int eliminar(Conjunto *c, int e);
int diferencia(Conjunto *a, Conjunto *b,Conjunto *d);

 #endif
