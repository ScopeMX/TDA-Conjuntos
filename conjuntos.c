#include <stdio.h>

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;

Conjunto *crear_vacio(){
        Conjunto *con, c;
        con = &c;
        con->cardinalidad = 0;
        return con;
}

Conjunto *union_conjunto(Conjunto *A, Conjunto *B){
	Conjunto *conjunto_final, cf;
	conjunto_final = &cf;

	return conjunto_final;
}

void mostrar(Conjunto *A){
	//wtf, donde voy a imprimir! alguien recuerda que hace esta funcion??
}