#include <stdio.h>
#include <stdlib.h>
#include "conjuntos.h"

Conjunto A;
Conjunto D;
Conjunto B;
Conjunto resultado;
Conjunto *p;
Conjunto bueno;
Carteciano PCR;

int main(){
    // Inician pruebas de interseccion y es vacio
    crear_vacio(&B);
    crear_vacio(&resultado);
    crear_vacio(&A);
    int prueba;

/*    A.elementos[0] = 1;
    A.elementos[1] = 3;
    A.elementos[2] = 4;
    A.elementos[3] = 5;
    A.elementos[4] = 7;

    B.elementos[0] = 4;
    B.elementos[1] = 5;
    B.elementos[2] = 6;
    B.elementos[3] = 1;

    B.cardinalidad = 4;
    A.cardinalidad = 5;*/

    int c = cardinalidad(&A);
    printf("%d\n", c);

    agregar(&A, 5);
    agregar(&A, 3);
    agregar(&A, 4);
    agregar(&A, 5);
    c = cardinalidad(&A);
    printf("%d\n", c);
    imprimir(&A);
    

 /*   prueba = interseccion(&A, &B, &resultado);
    printf("resultado cardinalidad: %d\n", resultado.cardinalidad);
    printf("resultado es vacio: %d\n", es_vacio(&resultado));
    int i;
    for (i = 0; i<resultado.cardinalidad; i++) {
        printf("Elementos: %d\n", resultado.elementos[i]);
    }*/
    // Terminan pruebas de interseccion y es vacio

    //Pruebas de producto cartesiano:
  //  producto_carteciano(A, B, &PCR);
    //Checo que el apuntador sea correcto
  //  printf("%d\n Final de producto cartesiano", PCR.cardinalidad);

    /*
    crear_vacio(&D);

    printf("cardinalidad de A = %d\n", A.cardinalidad);

    crear_vacio(&A);



    D.elementos[0] = 1;
    D.elementos[1] = 2;
    D.elementos[2] = 3;
    C.elementos[0] = 4;
    C.elementos[1] = 5;
    C.elementos[2] = 1;

    D.cardinalidad = 3;
    C.cardinalidad = 3;

    int union_ab;
    printf("elementos de A = %d\n", D.elementos[0]);
    printf("elementos de A = %d\n", D.elementos[1]);

    //Union
    printf("Union D con C\n");
    union_ab = union_conjuntos(&D,&C,&Union);
    printf("%d \n", union_ab);
    printf("Cardinal Union: %d \n", Union.cardinalidad);
    imprimir(&Union);

    //Potencia
    //p = potencia(&A);
//int s,el;

    crear_vacio(&A);

<<<<<<< HEAD
    A.elementos[0] = 7;
    A.elementos[1] = 8;
    A.elementos[2] = 6;
    A.elementos[3] = 4;
    A.elementos[4] = 9;
    B.elementos[0] = 1;
    B.elementos[1] = 2;
    B.elementos[2] = 3;
    B.elementos[3] = 11;
    B.elementos[4] = 24;
    B.cardinalidad=5;
    A.cardinalidad=5;
    E.cardinalidad=0;
int r,t,u;
printf("----------------------------------------------------------");
for(r=0;r<A.cardinalidad;r++){
    printf("\nElemento de A: %d\n",A.elementos[r]);

    printf("%s\n", "paso 1, done");

    imprimir(&A);
    imprimir(&B);
    */
/*for(s=0;s<A.cardinalidad;s++){
    printf("\nElemento de A: %d\n",A.elementos[s]);
>>>>>>> cfc69ba3ce1121d02c252d77dbabade334320147
        }
    printf("\nCardinalidad de A: %d \n",A.cardinalidad);

for(t=0;t<B.cardinalidad;t++){
    printf("\nElemento de B: %d\n",B.elementos[t]);
        }
    printf("Cardinalidad de B: %d \n",B.cardinalidad);

    diferencia(&A,&B,&E);

for(u=0;u<(E.cardinalidad);u++){
    printf("\nElemento de E: %d\n",E.elementos[u]);
}
    printf("Cardinalidad de E: %d \n",E.cardinalidad);


    //A.elementos[4] = 6;

printf("==============================================================");
getch();
        int s,el;
        //for(i = 0; i < 4; i++){
         //  printf("%d\n",(p+i)->cardinalidad);

            for(s=0;s<A.cardinalidad;s++){
                printf("\nElemento de A: %d\n",A.elementos[s]);}

        printf("\nIngresa el elemento a eliminar: ");
        scanf("%d",&el);
        eliminar(&A,el);
        printf("cardinalidad : %d\n ", A.cardinalidad);
        for(s=0;s<A.cardinalidad;s++){
               printf("\nElemento de A: %d\n",A.elementos[s]);
           }

       // A.cardinalidad = 4;
       // B.cardinalidad = 2;

        //printf("cardinalidad de A = %d\n", A.cardinalidad);
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
           getch();

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

    //printf("cardinalidad de A = %d\n", A.cardinalidad);
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
