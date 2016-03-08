#include <stdio.h>
#include "conjuntos.h"


int factorial(int num);
int subconjuntosPotencia(int cardinalidad, int subCardinalidad);


int crear_vacio(Conjunto *A){
        A->cardinalidad = 0;
        return 1;
}

int cardinalidad(Conjunto * A){
    int car = A->cardinalidad;
    return car;
}


int agregar(Conjunto * A, int x){
    int n = 0, l=0;
    for(l;l<A->cardinalidad;l++){
        if(x == A->elementos[l]){
            return 0;
        }                
    }
    A->elementos[A->cardinalidad] = x;
    A->cardinalidad++;
    return 1;
}


//Producto Cartesiano
int producto_carteciano(Conjunto A, Conjunto B, Carteciano *R){
    printf("%d %d \n", A.cardinalidad, B.cardinalidad);
    R->cardinalidad=A.cardinalidad*B.cardinalidad;
    //printf("Aquí empieza producto cartesiano \nCardinalidad del resultado: %d\n", R->cardinalidad);
    int i;
    int elemento=1;
    for (i = 0; i < A.cardinalidad; ++i)
    {
        int j;
        for (j = 0; j < B.cardinalidad; ++j)
        {
            R->elementos[j][0]=A.elementos[i];
            R->elementos[j][1]=B.elementos[j];
            //printf("Elemento %d: (%d,%d)\n", elemento, R->elementos[j][0], R->elementos[j][1]);
            elemento++;
        }
        printf("Cardinalidad del Producto Cartesiano: %d", R->cardinalidad);
    }
    return 1;
}
//Final FUnción productoCarteciano
//Función para imprimir el producto cartesiano
void imprimirCartesiano(Carteciano R){
        int i;
        for(i=0; i < R.cardinalidad;++i){
                printf("Elemento %d: (%d,%d)"; R.elementos[i][0], R.elementos[i][1];
        }
}
//Final imprimir cartesiano.

/*IMPRIMIR*/
void imprimir(Conjunto*A){
        if(A->cardinalidad == 0){
            printf("%s\n", "| |" );
        }else{
            int i=0;
            for(i;i<A->cardinalidad;i++){
                printf("%d | ",A->elementos[i]);
            }
            printf("\n");
        }
}
/*UNION*/
int union_conjuntos(Conjunto*A, Conjunto *B, Conjunto *Union){
        int i=0, j=0, k=0, iguales=0, z=0;
        int cardinalidad_union=0;
        int already=0;
        Union->cardinalidad = 0;
        if(A->cardinalidad == 0 && B->cardinalidad ==0){
            Union->cardinalidad = 0;
            printf("%s\n", "La union resulto en vacio \n");
            return 0;        }
        for(i;i<A->cardinalidad;i++){
            if(Union->cardinalidad<100){
                Union->elementos[i] = A->elementos[i];
                Union->cardinalidad++;
            }else{
                printf("Conjunto Union lleno!\n");
                break;           }        }
        cardinalidad_union = Union->cardinalidad;
        for(j;j<B->cardinalidad;j++, i++){
            if(Union->cardinalidad<100){
                for(k;k<cardinalidad_union;k++){//Recorrer lo que ya llevo
                        if(B->elementos[j]==Union->elementos[k]){//Encontro coincidencia
                            already=1;
                            iguales++;                        }                }
                k=0;
                if(already==0){
                    Union->elementos[i] = B->elementos[j];
                    Union->cardinalidad++;
                    already=0;
                }            }else{
                printf("Conjunto Union lleno!\n");
                break;
            }
        }
        printf("Cardinalidad de la Union: %d\n",Union->cardinalidad);
        //imprimir(Union);
        //printf("IGUALES: %d \n",iguales);
        //printf("--------------------------\n");
        return 1;
}

// Supongo que siempre le llega un apuntador
int es_vacio(Conjunto *A) {
    if (A->cardinalidad == 0)
        return 1; // es vacio
    return 0; // no es vacio
}

int interseccion(Conjunto *A, Conjunto *B, Conjunto *resultado) {
    int i, j;
    int k = 0; // la posicion en el nuevo arreglo
    // No es lo mas optimo pero bueno
    for (i = 0; i < A->cardinalidad; i++) {
        // printf("A=%d \n", A->elementos[i]);
        for (j = 0; j < B->cardinalidad; j++) {
            // printf("B=%d \n", B->elementos[j]);
            if (B->elementos[j] == A->elementos[i]) {
                // printf("Igual = %d\n", k);
                resultado->elementos[k] = B->elementos[j];
                ++k;
                break; // Para que no siga buscando
            }
        }
    }
    // Cardinalidad = cuantas veces encontro elementos iguales
    resultado->cardinalidad = k;
    return 1;
}

int potencia(Conjunto *A, Conjunto **h){
        int car = 0;
        int i = 1, j,k;
        int basta = 0;
        int pos = 0;
        int inicial = 0;
        int distancia = 0;
        int ultimo;
        int cardio = 0;
        int cambio = 0;

        int validar = 0;

        //printf(" apuntador de lo que llego: %d\n",  A);
        //printf(" cardinalidad de lo que llego: %d\n",  A->cardinalidad);
        //printf(" elemento 1 de lo que llego: %d\n",  A->elementos[0]);
        //printf(" elemento 2 de lo que llego: %d\n",  A->elementos[1]);

        for(i = 0; i <= A->cardinalidad; i++){
                car = car + subconjuntosPotencia(A->cardinalidad, i);
        }
        //printf("%s %d\n", "cardinalidad calculada = ", car);


        Conjunto p[car];
        i = 1;
        while(i == 1){
            //printf("%s\n", "se metio");
                inicial = 0;
                distancia = 0;

                if(cardio > A->cardinalidad){break;}

                basta = subconjuntosPotencia(A->cardinalidad, cardio); //cuantos subconjutos debe crear con esa cardinalidad
                //printf("Basta= %d\n", basta);

                if(basta == 0){i =0;}//cuando ya no haya mas subconjutos se detiene

                for(j = 0; j < basta; j++){
                        p[pos].cardinalidad = cardio;
                        //printf("cardinalidad del elemento %d\n ", cardio);
                        if(cardio != 0){
                                validar = A->cardinalidad - cardio;
                                if(inicial - (distancia + k) == validar){
                                    inicial++;
                                }
                                p[pos].elementos[0] = A->elementos[inicial];
                                //printf("%d, ", p[pos].elementos[0]);
                                for(k = 1; k <= cardio-1;k++){
                                        if((inicial + distancia + k) >= A->cardinalidad){
                                            p[pos].elementos[k] = A->elementos[(inicial + distancia + k - A->cardinalidad)];
                                            if((A->cardinalidad - (distancia + k)) == 2){
                                                cambio = 1;
                                            }
                                        }
                                        else{
                                            p[pos].elementos[k] = A->elementos[inicial + distancia + k];
                                        }
                                        ultimo = A->elementos[inicial + distancia + k];
                                        //printf("%d, ", p[pos].elementos[k]);
                                }
                                //printf("%s\n", "");
                                if(ultimo == A->elementos[(A->cardinalidad-1)] || cambio == 1){
                                        inicial++;
                                        distancia=0;
                                        cambio = 0;
                                }
                                else{
                                        distancia++;
                                }
                                if(cardio == 1){
                                    inicial++;
                                }
                        }
                        else{
                            p[pos].cardinalidad = 0;
                        }
                        pos++;
                }
                cardio++;
        }
        *h = p;
        return 1;
}

int eliminar(Conjunto *c ,int e){
int i,j;
if(c->cardinalidad==0){
return 0 ;// es vacio  no se pudo
}
else{
for(i=0;i<(c->cardinalidad);i++){
if(c->elementos[i]==e){
    for(j=i;j<(c->cardinalidad);j++){
        c->elementos[j]=c->elementos[j+1];//recorre los lugares del arreglo
    }
    (*c).cardinalidad--;
    return 1; // si se pudo :D
}

}
    printf("No se encontro el elemento\n");
}

return 0;// no se pudo
}

int diferencia(Conjunto *a, Conjunto *b,Conjunto *d){
int ia,ib;
int k,re;
int con;
if(a->cardinalidad==0){
d->cardinalidad=a->cardinalidad;
return 0;// no se pudo
}
else if(b->cardinalidad==0){
d->cardinalidad=a->cardinalidad;
for(k=0;k<(d->cardinalidad);k++){
        d->elementos[k]=a->elementos[k];
}
return 1;// si se pudo
}
else{
   for(ia=0;ia<(a->cardinalidad);ia++){
        for(ib=0;ib<(b->cardinalidad);ib++){
            if(a->elementos[ia] == b->elementos[ib]){
                eliminar(a,b->elementos[ib]);
                ia--;
                }
            }
        }

   for(con=0;con<a->cardinalidad;con++){
    d->elementos[con]=a->elementos[con];
    d->cardinalidad++;
   }

return 1;
   }
  }
//funciones aparte

int factorial(int num){
    if(num == 1 || num == 0){
        return 1;
    }
    else{
        return num*factorial(num-1);
    }
}

int subconjuntosPotencia(int cardinalidad, int subCardinalidad){
    int sub = 0;
//    printf("car = %d\n", cardinalidad);
//    printf("subcar = %d\n", subCardinalidad);
    sub = factorial(cardinalidad)/(factorial(subCardinalidad)*factorial(cardinalidad - subCardinalidad));
    return sub;
}
