all: testIB1 testIB2 testIB3 testII testIII1 testIII2 testIII3 testIII4
affichage-processus.o: affichage-processus.h affichage-processus.c
		gcc -c affichage-processus.c
gestionFichiers.o: gestionFichiers.h gestionFichiers.c
		gcc -c gestionFichiers.c
testIB1.o: affichage-processus.h testIB1.c
		gcc -c testIB1.c
testIB2.o: affichage-processus.h testIB2.c
		gcc -c testIB2.c
testIB3.o: affichage-processus.h testIB3.c
		gcc -c testIB3.c
testII.o: affichage-processus.h testII.c
		gcc -c testII.c
testIII1.o: affichage-processus.h testIII1.c gestionFichiers.h
		gcc -c testIII1.c
testIII2.o: affichage-processus.h testIII2.c gestionFichiers.h
		gcc -c testIII2.c
testIII3.o: affichage-processus.h testIII3.c gestionFichiers.h
		gcc -c testIII3.c
testIII4.o: affichage-processus.h testIII4.c gestionFichiers.h
		gcc -c testIII4.c
testIB1: testIB1.o affichage-processus.o
		gcc testIB1.o affichage-processus.o -o testIB1
testIB2: testIB2.o affichage-processus.o
		gcc testIB2.o affichage-processus.o -o testIB2
testIB3: testIB3.o affichage-processus.o
		gcc testIB3.o affichage-processus.o -o testIB3
testII: testII.o affichage-processus.o
		gcc testII.o affichage-processus.o -o testII
testIII1: testIII1.o affichage-processus.o gestionFichiers.o
		gcc testIII1.o affichage-processus.o gestionFichiers.o -o testIII1
testIII2: testIII2.o affichage-processus.o gestionFichiers.o
		gcc testIII2.o affichage-processus.o gestionFichiers.o -o testIII2
testIII3: testIII3.o affichage-processus.o gestionFichiers.o
		gcc testIII3.o affichage-processus.o gestionFichiers.o -o testIII3
testIII4: testIII4.o affichage-processus.o gestionFichiers.o
		gcc testIII4.o affichage-processus.o gestionFichiers.o -o testIII4
clean:
		rm *.o
veryclean:
		rm *.o testIB? testII testIII?