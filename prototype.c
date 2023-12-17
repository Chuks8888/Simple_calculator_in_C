#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "operations.h" 

/*void reallocate(int* previous,int iteration)
{
	printf("increasing memory for pointer\n");

	int size = Length * iteration;
	
	int* temp = malloc(Length * iteration);
	for(int i=0;i<size; i++)
		temp[i] = previous[i];
	
	previous = malloc(Length*iteration*2);

	for(int i=0;i<size; i++)
		previous[i]=temp[i];

	free(temp); 
}*/

int main()
{
	char* operation = malloc(64);
	fgets(operation, 64, stdin);

	int* numbers_storage = malloc( sizeof(int)*Length);

	*numbers_storage = 0;

	int j = 1; // index for numbers_storage

	for(int i=0; i<64; i++)
	{ 
		if(operation[i] == 10) 
			break;


		printf("%c\t value in int: %d\n", operation[i], operation[i]);
	}

	free(numbers_storage);
	//free(operands_storage);
}
