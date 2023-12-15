#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Length 32

void reallocate(void* previous)
{
	int size = sizeof(previous);

	(void)realloc(previous, size*2);
}

int main()
{
    char* operation;
    operation = malloc(Length);
    operation = fgets(operation, Length, stdin);

	int* numbers_storage = malloc(Length);
	char* operands_storage = malloc(Length);

	free(operation);
	free(numbers_storage);
	free(operands_storage);
}
