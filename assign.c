#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include "assign.h"
#include "operations.h"

int power(int a, int n)
{
	if(n == 0) return 1;
	int pow = a;
	for(int i=1;i<n;i++)
		a*=pow;
	return a;
}

void assign(char* operation, char* operands, int numbers[], int* a, int* b)
	{
		int temp = 0, j = 0, k = 0;

		for(int i=0;i<Length;i++)
		{
			temp = 0;

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
			}
		}
		*a = j;
		*b = k;
	}
