#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 15

/* Crie um programa que leia um vetor com 15 posi��es e em seguida imprima os 
valores pares desse vetor */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, pares = 0, num[vet];
	
	for(i = 0; i < vet; i++)
	{
		printf("Insira o valor do %d� termo da sequ�ncia:  ", i + 1);
		scanf("%d", &num[i]);
	}
	
	printf("\n");
	
	printf("N�meros pares da sequ�ncia: ");
	printf("\n");
	for(i = 0; i < vet; i++)
	{
		pares = num[i] % 2;
		if(pares == 0)
		{
			printf("- %d\n", num[i]);
		}
	}
	return 0;
}
