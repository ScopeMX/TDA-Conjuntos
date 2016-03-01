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

Conjunto *union_conjunto(Conjunto* A){
	Conjunto *conjunto_final, ca;
	ca = *A;
	printf("Eyah: %d", ca.cardinalidad);
	return conjunto_final;
}

void mostrar(Conjunto *A){
	//wtf, donde voy a imprimir! alguien recuerda que hace esta funcion??
}