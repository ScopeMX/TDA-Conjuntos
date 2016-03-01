#include <stdio.h>
#include "conjuntos.h"

int main(){
        Conjunto * A = crear_vacio();
        printf("cardinalidad de A = %d\n", A->cardinalidad);
        union_conjunto(A);
        getch();
        return 0;
}
