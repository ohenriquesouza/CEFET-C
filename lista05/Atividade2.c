#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#define vet 10



/* Crie um vetor de 10 n�meros reais e solicite o usu�rio para digitar os n�meros. 
Em seguida, crie mais 2 vetores do mesmo tamanho e em um deles armazene, 
em cada posi��o, a raiz quadrada do elemento que est� na mesma posi��o do 
vetor digitado e no segundo vetor armazene, em cada posi��o, o valor do 
elemento que ocupa a mesma posi��o no vetor digitado, elevado ao cubo. Por 
fim, imprima os 3 vetores (O digitado, o vetor com os valores elevados ao cubo 
e o vetor com a raiz quadrada de todos os elementos).  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	float num[vet], raiz[vet], cubo[vet];
	int i;
	
	for( i = 0; i < vet; i++)
	{
		printf("Informe o valor do %d� n�mero real: ", i + 1);
		scanf("%f", &num[i]);
	}
	printf("\n");
	for( i = 0; i < vet; i ++)
	{
		raiz[i] = sqrt( num[i] );
		printf("As raizes quadradas dos elementos inseridos foram de: %.2f\n", raiz[i]);
	}
	printf("\n");
	for( i = 0; i < vet; i++)
	{
		cubo[i] = pow( num[i], 3 );
		printf("O cubo dos elementos inseridos foi de: %.2f\n", cubo[i]);
	}	
	return 0;
}
