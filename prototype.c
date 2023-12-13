#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define Length 32

int main()
{
    char* operation;
    operation = malloc(Length);
    operation = fgets(operation, Length, stdin);    
}