#ifndef CONJUNTOS_H
#define CONJUNTOS_H

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;

Conjunto * crear_vacio();
Conjunto * union_conjunto(Conjunto *A, Conjunto *B);
void mostrar(Conjunto *A);

 #endif
