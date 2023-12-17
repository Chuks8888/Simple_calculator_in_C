#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "operations.h" 

void reverse_polish(char* rpn, char* operands, char* numbers)
{
	int j = 0, k = 0;
	for(int i=0; i<Length;i++)
	{
		
	}
}

int main()
{
	char* operation = malloc(Length);
	char* rpn = malloc(Length);
	char* operands = malloc(Length);
	char* numbers = malloc(Length);

	fgets(operation, Length, stdin);

	int j=0, k=0;

	for(int i=0;i<Length;i++)
	{
		if(operation[i] == 10)
		{
			operands[k] = 10;
			numbers[j] = 10;
			break;
		}
		
		if(operation[i] == 32 || isdigit(operation[i])!=0)
		{
			numbers[j] = operation[i];
			j++;
			continue;
		}

		else
		{
			operands[k] = operation[i];
			numbers[j] = 32;
			k++;
			j++;
		}
	}

	for(int i=0;i<Length;i++)
	{
		if(numbers[i] == 10) break;
		else printf("%c", numbers[i]);
	}

	printf("\n");

	for(int i=0;i<Length;i++)
	{
		if(operands[i] == 10) break;
		else printf("%c", operands[i]);
	}
	//reverse_polish(operation, rpn, operands);

	/*for(int i=0; i<Length; i++)
	{ 
		if(rpn[i] == 10) 
			break;
		printf(" %d", rpn[i]);
	}*/

	free(operation);
	free(rpn);
	free(operands);
	free(numbers);
}
