

all: t_st

t_st: main.o temp_functions.o
	gcc -o t_st main.o temp_functions.o

main.o: main.c temp_functions.h
	gcc -c main.c

temp_functions.o: temp_functions.c temp_functions.h
	 gcc -c temp_functions.c

clean:
	rm -f *.o t_st