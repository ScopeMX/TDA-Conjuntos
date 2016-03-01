#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"

Conjunto A;
Conjunto B;
Conjunto C;
Conjunto Union;
Conjunto *p;

int main(){


        crear_vacio(&B);
        crear_vacio(&C);
        crear_vacio(&A);

        printf("cardinalidad de A = %d\n", A.cardinalidad);

        A.elementos[0] = 1;
        A.elementos[1] = 2;
        A.elementos[2] = 3;
        C.elementos[0] = 4;
        C.elementos[1] = 5;
        C.elementos[2] = 1;


        A.cardinalidad = 3;
        B.cardinalidad = 2;
        C.cardinalidad = 3;

        printf("elementos de A = %d\n", A.elementos[0]);
        printf("elementos de A = %d\n", A.elementos[1]);

        printf("%s\n", "paso 1, done");

        printf("Union B con C\n");
        p = union_conjuntos(&A,&C);
        p = potencia(&A);

        printf("%s\n", "paso 2, done");
        printf("%d\n",p);

        printf("%s\n","Paso 3");

        int i;
        for(i = 0; i < 4; i++){
            printf("%d\n",(p+i)->cardinalidad);
        }

        system("PAUSE");
        return 0;
}
