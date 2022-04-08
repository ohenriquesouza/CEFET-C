#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define TAM 5

/*
 Fa�a um programa que preencha uma matriz de string com os modelos de cinco 
carros (exemplos de modelos: Corolla, Uno, Prisma, etc.). Em seguida, preencha 
um vetor com o consumo desses carros, isto �, quantos quil�metros cada um 
deles faz com um litro de combust�vel. Calcule e mostre:
(a) O modelo de carro mais econ�mico; 
(b) Quantos litros de combust�vel cada um dos carros 
cadastrados consome para percorrer uma dist�ncia de 1.000 quil�metros
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, j;
	int pos = 0;
	int modelo[TAM][80];
	float consumo[TAM];
	float menorconsu = 0;
	float distancia[TAM];
	
	for(i = 0; i < TAM; i++)
	{
		printf("Informe o %d� modelo de carro: ", i+1);
		scanf("%s", &modelo[i]);
	}
	
	printf("\n");
	
	for(i = 0; i < TAM; i++)
	{
		printf("Insira o consumo por litro do carro '%s': ", modelo[i]);
		scanf("%f", &consumo[i]);
	}
	
	printf("\n");
	
	for (i = 0; i < TAM; i++)
	{
		if(i == 0 || menorconsu < consumo[i])
		{
			menorconsu = consumo[i];
			pos = i;
		}
	}
	
	printf("\n");
	
	for(i = 0; i < TAM; i++)
	{
		distancia[i] = (1000 / consumo[i]);
	}
	
	printf("O menor consumo foi %.0fKm/L, do carro '%s'.", menorconsu, modelo[pos]);
	
	printf("\n");
	
	for(i = 0; i < TAM; i++)
	{
		printf("\nO modelo '%s', gastaria %.2fL de gasolina para rodar 1000Km.", modelo[i], distancia[i]);
	}
	
	return 0;
}
