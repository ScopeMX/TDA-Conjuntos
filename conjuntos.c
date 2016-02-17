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
