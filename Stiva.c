#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int push(char nr, char* stiva, char* varf)
{
	if (*varf == 9)
	{
		printf("Stiva este plina \n");
		(*varf)++;
		return 0;
	}
	(*varf)++;
	return stiva[(*varf)] = nr;
}

int pop(char* stiva, char* varf)
{

	return stiva[--(*varf)];
}

int main()
{
	char stiva[11]={'\0'}, varf = -1, caracter;
	while (varf < 10)
	{
		printf("Introduceti un caracter: ");
		scanf(" %c", &caracter);
		push(caracter, stiva, &varf);
	}
	printf("%s", stiva);

	printf("\n");
	system("pause");
	return 0;
}