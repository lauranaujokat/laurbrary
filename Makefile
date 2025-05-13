main: main.c files.c linkedlist.c vector.c
	gcc -O3 ./main.c ./files.c ./vector.c ./linkedlist.c -o main

run: main
	./main
