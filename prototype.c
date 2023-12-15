#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "operations.h" 

void reallocate(int* previous,int iteration)
{
	int size = Length * iteration;
	
	int* temp = malloc(size);
	for(int i=0;i<size; i++)
		*(temp+i) = *(previous+i);
	
	free(previous);
	previous = malloc(size*2);


	for(int i=0;i<size; i++)
		*(previous+i) = *(temp+i);

	//realloc(previous, size*2);
	free(temp);
	printf("increasing memory for pointer\n");
}

int main(int argc, char* argv[])
{
	int equasion = 0;

	int* numbers_storage = malloc(Length);
	char* operands_storage = malloc(Length);

	int iteration = 1, iteration2 = 1;

	int j = 0, k = 1;
	for(int i=1; i <= argc - 1; i++)
	{
		if(j == (Length * iteration))
		{
			reallocate(numbers_storage, iteration);
			iteration++;
		}
		//if(k == sizeof(operands_storage)) reallocate(operands_storage, iteration2);
		
		if(atoi(argv[i]) > 0 || isdigit(*argv[i]) != 0)
		{
			*(numbers_storage + j) = atoi(argv[i]);
			j+=4;
		}
		printf("%d ", *(numbers_storage + j - 4));
	}
	
	free(numbers_storage);
	free(operands_storage);
}
