#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int n1, n2, i, escolha = 0;
	float soma, subtracao, multiplicacao, divisao;
	
	printf("Informe dois algarismos: \n");
	scanf("%d %d", &n1, &n2);
	
	for(i = 0; escolha != 5; i++){
		
		printf("\nEscolha qual opera��o deseja fazer: \n1- Adi��o\n2- Subtra��o\n3- Multiplica��o\n4- Divis�o\n5- Sa�da. \t");
		scanf("%f", &escolha);
			
			if(escolha == 1){
				soma = (n1 + n2);
				printf("A soma dos dois algarismos � de: %.0f\n", soma);	
			}
			if (escolha == 2){
				subtracao = (n1 - n2);
				printf("A subtra��o dos dois algarismos � de: %0.f\n", subtracao);
			}
			if (escolha == 3){
				multiplicacao = (n1 * n2);
				printf("A multiplica��o dos dois algarismos digitados � de: %.0f\n", multiplicacao);
			}
			if (escolha == 4){
				divisao = (n1 / n2);
				printf("A divis�o dos dois algarismos � de: %.0f\n", divisao);
			}
		}
	return 0;
}
