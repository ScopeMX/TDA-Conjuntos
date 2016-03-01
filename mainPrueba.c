
#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"

Conjunto A;
Conjunto D;
Conjunto B;
Conjunto C;
Conjunto *Union;
Conjunto *p;
Conjunto bueno;

int main(){
        printf("%s\n", "========================================================");

        int sicreo = crear_vacio(&bueno);
    //    printf("%d\n", bueno.cardinalidad);

        bueno.elementos[0] = 2;
        bueno.elementos[1] = 4;
    //    bueno.elementos[2] = 3;
        bueno.cardinalidad = 2;

        sicreo = potencia(&bueno, &p);

    //    printf("%d\n", (p+1)->cardinalidad);

        int i,j;

        //printf("[ %s ]\n", " ");
        printf("[ %d ]\n", (p+1)->elementos[0]);
        //printf("[ %d ]\n", (p+2)->elementos[0]);
        //printf("[ %d, %d ]\n", (p+3)->elementos[0], (p+3)->elementos[1]);

        //for(i = 0; i < 4; i++){
            //j = (*(p+1)).cardinalidad;
            //printf("%d\n", j);
            /*for(j=0; j < (p+i)->cardinalidad;j++){
                printf("%d ", (p+i)->elementos[j]);
            }*/
        //}

        return 0;
}
