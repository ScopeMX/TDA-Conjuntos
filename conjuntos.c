#include <stdio.h>

struct  conjuntos {
        int elementos[100];
        int cardinalidad;
};

typedef struct conjuntos Conjunto;

int factorial(int num);
int subconjuntosPotencia(int cardinalidad, int subCardinalidad);


int crear_vacio(Conjunto *A){
        A->cardinalidad = 4;
        return 1;
}

Conjunto *potencia(Conjunto *A){
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

        printf(" apuntador de lo que llego: %d\n",  A);
        printf(" cardinalidad de lo que llego: %d\n",  A->cardinalidad);
        printf(" elemento 1 de lo que llego: %d\n",  A->elementos[0]);
        printf(" elemento 2 de lo que llego: %d\n",  A->elementos[1]);

        for(i = 0; i <= A->cardinalidad; i++){
                car = car + subconjuntosPotencia(A->cardinalidad, i);
        }
        printf("%s %d\n", "cardinalidad calculada = ", car);


        Conjunto p[car];
        i = 1;
        while(i == 1){
            //printf("%s\n", "se metio");
                inicial = 0;
                distancia = 0;

                if(cardio > A->cardinalidad){break;}

                basta = subconjuntosPotencia(A->cardinalidad, cardio); //cuantos subconjutos debe crear con esa cardinalidad
                printf("Basta= %d\n", basta);

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
                                printf("%d, ", p[pos].elementos[0]);
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
                                        printf("%d, ", p[pos].elementos[k]);
                                }
                                printf("%s\n", "");
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

        return p;
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
        printf("car = %d\n", cardinalidad);
        printf("subcar = %d\n", subCardinalidad);
        sub = factorial(cardinalidad)/(factorial(subCardinalidad)*factorial(cardinalidad - subCardinalidad));
        return sub;
}
