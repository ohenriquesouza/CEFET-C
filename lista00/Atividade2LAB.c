#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* TUNADO EM 30/08/2021 */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");	
int i, n1, n2, Soma = 0, sub = 0, mult = 0, div = 0;
char escolha;

for(i = 0; i < 5; i++)
{
	printf("\nInforme qual tipo de c�lculo deseja fazer: ");
	printf("\n(A) - Adi��o;\n(B) - Subtra��o;\n(C) - Multiplica��o;\n(D) - Divis�o;\n");
	scanf(" %c", &escolha);
	escolha = toupper(escolha);
	
	if(escolha == 'A')
	{
		printf ("Digite dois n�meros: ");
		scanf ("%d %d", &n1, &n2);
		Soma = (n1 + n2);
		printf ("Soma: %d\n", Soma);	
	}
	if(escolha == 'B')
	{
		printf ("Digite dois n�meros: ");
		scanf ("%d %d", &n1, &n2);
		sub = (n1 - n2);
		printf ("Subtra��o: %d\n", sub);
	}
	if(escolha == 'C')
	{
		printf ("Digite dois n�meros: ");
		scanf ("%d %d", &n1, &n2);
		mult = (n1 * n2);
		printf ("Multiplica��o: %d\n", mult);
	}
	if(escolha == 'D')
	{
		printf ("Digite dois n�meros: ");
		scanf ("%d %d", &n1, &n2);
		div = (n1 / n2);
		printf ("Divis�o: %d\n", div);
	}	
}
	return 0;
}
