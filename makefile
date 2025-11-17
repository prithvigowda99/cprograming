ABC exe:fact.o
	gcc -o ABC.exe fact.o
fact.o:fact.c
	gcc -c fact.c
