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

int main(int argc, char* argv[])
{
	int equals = 0;
	int* numbers_storage = malloc( sizeof(int)*Length);
	/*int* numbers_storage = (int*)malloc(Length * sizeof(int));*/
	//char* operands_storage = malloc(Length);

	//int iteration = 1, iteration2 = 1;

	int j = 0;

	for(int i=1; i <= argc - 1; i++)
	{
		if(atoi(argv[i]) > 0 || isdigit(argv[i]) != 0)
		{
			*(numbers_storage + j) = atoi(argv[i]);
			j++;
			printf("chechk argv = %d\n", atoi(argv[i]));
		}
		printf("%d\n", *(numbers_storage + j));
	}
	
	free(numbers_storage);
	//free(operands_storage);
}
