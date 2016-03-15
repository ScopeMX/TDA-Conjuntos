Para compilar con gcc (like a pro):
#Según Nornam:
###Primero precompilamos los modulos uno a uno sin ligarlos
gcc -c nombre_archivo.c
###Out: nombre_archivo.o
gcc -c nombre_archivoX.c
###Out: nombre_archivoX.o

###Ahora que los tenemos compilados, los ligamos:
gcc nombre_archivo.o nombre_archivoX.o
###AHora si lo podemos ejecutar con el .out generado

##La versión nuestra
###Compilamos y ligamos todo a la vez
>gcc -o name_exe mainPrueba.c conjuntos.c

##Comprimir
>tar czvf nombre.tar.gz directorio/
