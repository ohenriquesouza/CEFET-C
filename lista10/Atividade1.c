#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Fa�a um programa que solicite ao usu�rio o tamanho de um vetor e utilizando 
ponteiros e aloca��o din�mica de mem�ria (utilizando malloc), aloque um vetor 
com a quantidade de n�meros inteiros informada pelo usu�rio. Em seguida, o 
programa deve solicitar preenchimento do vetor e informar:
a. Os n�meros pares digitados;
b. A soma dos n�meros pares digitados;
c. Os n�meros �mpares digitados;
d. A quantidade de n�meros �mpares digitados.
e. O maior n�mero */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	
	int maior = 0, contI = 0, soma = 0, somaI = 0, num = 0, tam = 0, i, *vet;
	
	printf("\nInsira o tamanho do vetor: ");
	scanf("%d", &tam);
	
	vet = (int *)malloc(tam * sizeof(int));
	
	for(i = 0; i < tam; i++)
	{
		printf("\nInforme os n�meros que preencheram o vetor: ");
		scanf("%d", &*(vet+i));
	}
	
	printf("\n(a) - N�meros pares digitados: ");
	for(i = 0; i < tam; i++)
	{
		if(*(vet+i) % 2 == 0)
		{
			printf("%d ", *(vet+i));
			soma += *(vet+i);
		}
	}
	
	printf("\n(b) - Soma dos pares: ");
	printf("%d", soma);
	
	for(i = 0; i < tam; i++)
	{
		if(*(vet+i) % 2 != 0)
		{
			somaI += *(vet+i);
		}
	}
	printf("\n(c) - Soma dos �mpares: ");
	printf("%d", somaI);
	
	printf("\n(d) - Quantidade de n�meros �mpares digitados: ");
	for(i = 0; i < tam; i++)
	{
		if(*(vet+i) % 2 != 0)
		{		
			contI++;		
		}
	}
	printf("%d", contI);
	
	printf("\n(e) - O maior n�mero digitado: ");
	for(i = 0; i < tam; i++)
	{
		if(*(vet+i) > maior)
		{
			maior = *(vet+i);
		}
	}
	printf("%d", maior);
	return 0;
}
