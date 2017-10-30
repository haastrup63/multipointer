CC=CC
CXX=CC
CFLAGS=-Wall -g -std=c99  -werror

all: main

%.o : %.c
	$(CC) -c $(CCFLAGS) $<


main: main.o MyPointer.o 
	$(CC)  -o main main.o MyPointer.o

 all : ; @echo $(Main)

test: main
	./main

clean:
	rm -f  *.o main 