all: main clean

main: 
	cc -c prototype.c -c assign.c
	cc prototype.o assign.o -o test
clean:
	rm *.o
