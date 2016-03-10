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
int prueba;
int iniciar_variables_main();

int
main (void)
{
  iniciar_variables_main();
  potencia(&A, &p);
  //printf("%d\n", (p+30)->elementos[4]);
  prueba = interseccion (&A, &B, &resultado);
  printf("Es vacio D: %d\n", es_vacio(&D));
  printf("Es vacio resultado: %d\n", es_vacio(&resultado));

  int i;
  for (i = 0; i < cardinalidad(&resultado); i++)
  {
    printf ("Elementos: %d\n", resultado.elementos[i]);
  }
  // Terminan pruebas de interseccion y es vacio
  //Pruebas de producto cartesiano:
  //producto_carteciano (A, B, &PCR);
  //Checo que el apuntador sea correcto
  //printf ("%d\n Final de producto cartesiano", PCR.cardinalidad);
  return 0;
}

int
iniciar_variables_main(void)
{
  // Inician pruebas de interseccion y es vacio
  crear_vacio (&B);
  crear_vacio (&resultado);
  crear_vacio (&A);

  A.elementos[0] = 1;
  A.elementos[1] = 3;
  A.elementos[2] = 4;
  A.elementos[3] = 5;
  A.elementos[4] = 7;

  B.elementos[0] = 4;
  B.elementos[1] = 5;
  B.elementos[2] = 6;
  B.elementos[3] = 1;

  B.cardinalidad = 4;
  A.cardinalidad = 5;

  return 0;
}
