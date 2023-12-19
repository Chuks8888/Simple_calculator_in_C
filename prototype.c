#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "operations.h"
#include "assign.h"

int equation(char operator, int n1, int n2)
{
	switch(operator)
	{
		case '+': 
			return sum(n1, n2); 

		case '-':
			return diff(n1, n2);

		case '*':
			return product(n1, n2);

		case '/':
			return div(n1, n2);
		
		default: return 0;
	}
}

int main()
{
	char* operation = malloc(Length);
	char* operands = malloc(Length);
	int numbers[Length];

	fgets(operation, Length, stdin);

	int j=0, k=0, temp = 0;

	assign(operation, operands, numbers, &j, &k);

	for(int i=0;i<j;i++)
	{
		printf("%d ", numbers[i]);
	}

	printf("\n");

	for(int i=0;i<Length;i++)
	{
		if(operands[i] == 10) break;
		else printf("%c ", operands[i]);
	}

	free(operation);
	free(operands);
}
