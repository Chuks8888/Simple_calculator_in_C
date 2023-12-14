#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Length 32

void reallocate(int* previous)
{
	int size = sizeof(previous);
	int *temp = malloc(size);

	memcpy(temp, previous, size);

	free(previous);
	previous = malloc (size*2);

	memcpy(previous, temp, size);
}

int main()
{
    char* operation;
    operation = malloc(Length);
    operation = fgets(operation, Length, stdin);
	
}
