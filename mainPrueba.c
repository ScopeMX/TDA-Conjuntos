
#include <stdio.h>
#include "conjuntos.h"

Conjunto A;
Conjunto B;
Conjunto *p;

int main(){
    int s,el,t,u;
        crear_vacio(&A);

        A.elementos[0] = 1;
        A.elementos[1] = 3;
        A.elementos[2] = 4;
        A.elementos[3] = 5;
        B.elementos[0] = 4;
        B.elementos[1] = 5;
        B.cardinalidad=0;
        A.cardinalidad=4;

    for(s=0;s<A.cardinalidad;s++){
        printf("\nElemento de A: %d\n",A.elementos[s]);
            }
    for(t=0;t<B.cardinalidad;t++){
        printf("\nElemento de B: %d\n",B.elementos[t]);
            }
        p=diferencia(&A,&B);

    for(u=0;u<(p->cardinalidad);u++){
        printf("\nElemento de P: %d\n",p->elementos[t]);
    }

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
        system("pause");
        return 0;
}
