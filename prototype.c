#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "operations.h" 

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
		
		if(isdigit(operation[i])!=0)
		{
			numbers[j] = operation[i];
			j++;
			continue;
		}

		else 
		{
			if(operation[i] == 32) break;
			operands[k] = operation[i];
			numbers[j] = 32;
			k++;
			j++;
		}
		if(k >= 2 && j >=2)
		{
			if(operands[k-1] == 45 || operands[k-1] == 43)
			{
				if(operands[k] == 42 || operands[k] == 47)
					continue;

				if(operands[k] == 40)
					
			}
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

	free(operation);
	free(rpn);
	free(operands);
	free(numbers);
}
