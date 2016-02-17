#include <stdio.h>
#include "conjuntos.h"

int main(){
        Conjunto * A = crear_vacio();
        printf("cardinalidad de A = %d\n", A->cardinalidad);
        getch();
        return 0;
}
