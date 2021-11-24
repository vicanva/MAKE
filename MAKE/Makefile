calcula: calcula.c calc.o
	gcc -Wall -g calcula.c calc.o -o calcula

calc.o: calc.c
	gcc -Wall -g calcula.c calc.o -o

.PHONY:clean
clean:
	rm -rf *.o calcula