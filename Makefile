a.out:main.o conjuntos.o
	gcc main.o conjuntos.o
main.o:main.c
	gcc -c main.c
conjuntos.o:conjuntos.c
	gcc -c conjuntos.c
clear:
	rm main.o conjuntos.o a.out
