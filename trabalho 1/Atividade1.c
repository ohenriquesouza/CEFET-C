#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int dinheiro, i, notas = 0, resto = 0, n200 = 0, n100 = 0, n50 = 0, n10 = 0, n5 = 0, n1 = 0;
	
	printf("Informe o valor (em reais) que voc� deseja divir as notas: R$");
	scanf("%d", &dinheiro);
		
		n200 = dinheiro / 200;
		resto = dinheiro % 200;
		
		n100 = resto / 100;
		resto %= 100;
		
		n50 = resto / 50;
		resto %= 50;
		
		n10 =  resto / 10;
		resto %= 10;
		
		n5 = resto / 5;
		resto %= 5;
		
		n1 = resto / 1;
		resto %= 1;
	
		printf("O n�mero de notas de 200 necess�rias foi de: %d\n", n200);
		printf("O n�mero de notas de 100 necess�rias foi de: %d\n", n100);
		printf("O n�mero de notas de 50 necess�rias foi de: %d\n", n50);
		printf("O n�mero de notas de 10 necess�rias foi de: %d\n", n10);
		printf("O n�mero de notas de 5 necess�rias foi de: %d\n", n5);
		printf("O n�mero de notas de 1 necess�rias foi de: %d\n", n1);
	
	
	return 0;
}
