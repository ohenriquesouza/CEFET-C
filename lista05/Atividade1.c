#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define vet 10

/* Solicite o usu�rio para imprimir uma sequ�ncia de 10 n�meros e 
imprima-os em uma ordem inversa a da leitura. Por exemplo, se os 
n�meros forem digitados na sequencia abaixo:
2 7 9 3 5 1 9 7 3 2
Eles devem ser impressos na ordem abaixo:
2 3 7 9 1 5 3 9 7 2 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL,"portuguese");
	int i, num[vet];
	
	for(i = 0; i < vet; i++)
	{
		printf("Informe o valor do %d� n�mero:  ", i+1);
		scanf("%d", &num[i]);
	}
	for(i = 9; i >= 0 ; i--)
	{
		printf("\nOs n�meros informados pelo usu�rio em ordem inversa: %d",num[i]);
	}
	
	return 0;
}
