#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "operations.h" 

void reallocate(void* previous)
{
	int size = sizeof(previous);

	(void)realloc(previous, size*2);
}

int main(int argc, char* argv[])
{
	int equasion = 0;

	int* numbers_storage = malloc(Length);
	char* operands_storage = malloc(Length);

	int j = 0, k = 0;
	for(int i=0; i < argc - 1; i++)
	{
		if(j == sizeof(numbers_storage)) reallocate(numbers_storage);
		if(k == sizeof(operands_storage)) reallocate(operands_storage);

		printf("%d\n", i);
	}

	free(numbers_storage);
	free(operands_storage);
	return 0;
}
