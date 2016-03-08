#ifndef __CONJUNTOS_H__
#define __CONJUNTOS_H__

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;

struct productoCarteciano {
    int elementos[100][2];
    int cardinalidad;
};
typedef struct productoCarteciano Carteciano;

int crear_vacio(Conjunto*);
int producto_carteciano(Conjunto, Conjunto, Carteciano*);
int es_vacio(Conjunto*);
int interseccion(Conjunto*, Conjunto*, Conjunto*);

int factorial(int);
int subconjuntosPotencia(int, int);

int potencia(Conjunto*, Conjunto**);
int union_conjuntos(Conjunto*, Conjunto*, Conjunto*);
void imprimir(Conjunto*);
int eliminar(Conjunto*, int);
int diferencia(Conjunto *a, Conjunto *b,Conjunto *d);

int cardinalidad(Conjunto * A);
int agregar(Conjunto * A, int x);

 #endif
