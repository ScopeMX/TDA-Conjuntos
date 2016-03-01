
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

    int s,el,t,u;


    crear_vacio(&B);
    crear_vacio(&C);
    crear_vacio(&A);
    crear_vacio(&D);

    printf("cardinalidad de A = %d\n", A.cardinalidad);

    D.elementos[0] = 1;
    D.elementos[1] = 2;
    D.elementos[2] = 3;
    C.elementos[0] = 4;
    C.elementos[1] = 5;
    C.elementos[2] = 1;


    D.cardinalidad = 3;
    C.cardinalidad = 3;

    printf("elementos de A = %d\n", D.elementos[0]);
    printf("elementos de A = %d\n", D.elementos[1]);

    printf("%s\n", "paso 1, done");

    //Union
    printf("Union D con C\n");
    Union = union_conjuntos(&D,&C);
    printf("Cardinal Union: %d \n", Union->cardinalidad);
    //imprimir(Union);

    //Potencia
    //p = potencia(&A);

//int s,el;

    crear_vacio(&A);

    A.elementos[0] = 1;
    A.elementos[1] = 3;
    A.elementos[2] = 4;
    A.elementos[3] = 5;
    B.elementos[0] = 4;
    B.elementos[1] = 5;
    B.cardinalidad=0;
    A.cardinalidad=4;

/*for(s=0;s<A.cardinalidad;s++){
    printf("\nElemento de A: %d\n",A.elementos[s]);
        }
for(t=0;t<B.cardinalidad;t++){
    printf("\nElemento de B: %d\n",B.elementos[t]);
        }
    p=diferencia(&A,&B);

for(u=0;u<(p->cardinalidad);u++){
    printf("\nElemento de P: %d\n",p->elementos[t]);
}*/

    //A.elementos[4] = 6;


    //int i;
    //for(i = 0; i < 4; i++){
       // printf("%d\n",(p+i)->cardinalidad);
    //}
        //for(s=0;s<A.cardinalidad;s++){
          //  printf("\nElemento de A: %d\n",A.elementos[s]);
        //}
    //printf("\nIngresa el elemento a eliminar: ");
    //scanf("%d",&el);
    //eliminar(&A,el);
    //printf("cardinalidad : %d\n ", A.cardinalidad);
    //for(s=0;s<A.cardinalidad;s++){
    //        printf("\nElemento de A: %d\n",A.elementos[s]);
     //   }

   // A.cardinalidad = 4;
   // B.cardinalidad = 2;

    printf("cardinalidad de A = %d\n", A.cardinalidad);
    //printf("cardinalidad de B = %d\n", B.cardinalidad);

    // p = interseccion(&A, &B);
    // int car = p->cardinalidad;
    // int j;
    // for (j = 0; j < car; j++) {
    //      printf("p= %d \n", p->elementos[j]);
    // }


    // printf("elementos de A = %d\n", A.elementos[0]);
    // printf("elementos de A = %d\n", A.elementos[1]);
    //
    // printf("%s\n", "paso 1, done");
    //
    // p = potencia(&A);
    //
    // printf("%s\n", "paso 2, done");
    // printf("%d\n",p);
    //
    // printf("%s\n","Paso 3");
    //
    // int i;
    // for(i = 0; i < 4; i++){
    //     printf("%d\n",(p+i)->cardinalidad);
    // }



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
