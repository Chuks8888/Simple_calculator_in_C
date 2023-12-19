#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "operations.h"

int power(int a, int n)
{
	if(n == 0) return 1;
	int pow = a;
	for(int i=1;i<n;i++)
		a*=pow;
	return a;
}

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

	for(int i=0;i<Length;i++)
	{

		if(operation[i] == 32) 
			continue;

		if(operation[i] != 10)
		{
			if(isdigit(operation[i]) != 0)
			{
				int p;

				for(p = 1;p<Length-i;p++)
				{
					if(operation[i+p] == 10) break;

					if(isdigit(operation[i+p]) == 0) 
						break;
				}
				for(int k=0;k<p;k++)
					temp += (operation[i+k] -48) * power(10, p-k-1); 
				
				numbers[j] = temp;
				j++;
				i+=p-1;
				continue;
			}

			else
			{
				operands[k] = operation[i];
				k++;
			}
		}
		else 
		{
			i = Length;
			operands[k] = 10;
			k++; j++;
		}
	}

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
