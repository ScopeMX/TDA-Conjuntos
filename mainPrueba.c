#include <stdio.h>
#include "conjuntos.h"

int main(){
        Conjunto A;
        crear_vacio(&A);
        printf("cardinalidad de A = %d\n", A.cardinalidad);

        A.elementos[0] = 1;
        A.elementos[1] = 3;
        //A.elementos[2] = 4;
        //A.elementos[3] = 5;
        //A.elementos[4] = 6;

        A.cardinalidad = 2;

        printf("elementos de A = %d\n", A.elementos[0]);
        printf("elementos de A = %d\n", A.elementos[1]);

        printf("%s\n", "paso 1, done");

        Conjunto *p = potencia(&A, p);

        printf("%s\n", "paso 2, done");
        printf("%d\n",p);

        printf("%s\n","Paso 3");

        int i;
        for(i = 0; i < 4; i++){
            printf("%d\n",(p+i)->cardinalidad);
        }

        return 0;
}
