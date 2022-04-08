#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 5

/* Fa�a um programa que leia um vetor de 5 posi��es para n�meros reais e, depois, 
um c�digo inteiro. Se o c�digo for zero, finalize o programa; se for 1, mostre o 
vetor na ordem direta; se for 2, mostre o vetor na ordem inversa. Caso, o c�digo 
seja diferente de 1 e 2 escreva uma mensagem informando que o c�digo � inv�lido.
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int  i, j;
	float num[vet], codigo;
	
	for ( i = 0; i < vet; i++)
	{
		printf("Informe o %d� n�mero real da sequ�ncia: ", i + 1);
		scanf("%f", &num[i]);
	}
	
	for(i = 0; i < vet; i++)
	{
		printf("\nInsira o c�digo desejado:\n(0)- Para finalizar o programa\n(1)- Para a seq�ncia digitar ser mostrada\n(2)- Para mostrar a sequ�ncia em ordem inversa\n ");
		scanf("%f", &codigo);
	
		if ( codigo == 0)
		{
			printf("Programa finalizado.");
			break;
		}
		
		if(codigo == 1)
		{
			printf("A sequ�ncia inseria pelo usu�rio:\n");
			for(j = 0; j < vet; j++)
			{
				printf(" - %.2f\n", num[j]);
			}
		}
		
		if(codigo == 2)
		{
			printf("A sequ�ncia inseria pelo usu�rio em ordem inversa:\n");
			for(j = 4; j >= 0; j--)
			{
				printf(" - %.2f\n", num[j]);
			}
		}
		
		else if ( codigo != 0 && codigo != 1 && codigo != 2)
		{
			printf("C�digo inv�lido, tente novamente.");
		}	
	}
	
	return 0;
}
