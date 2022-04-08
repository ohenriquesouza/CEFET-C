#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* Fa�a um algoritmo recebe como entrada o n�mero de alunos de uma turma e calcule as 
m�dias da 1� e 2� avalia��es de cada aluno e exiba na tela. Fa�a com que o algoritmo s� 
aceite notas v�lidas (uma nota v�lida deve pertencer ao intervalo [0,10]). Cada nota 
deve ser validada separadamente. Deve ser impressa a mensagem "Nota inv�lida" caso 
a nota informada n�o perten�a ao intervalo [0,10]. Ao fim, o programa deve exibir as 
m�dias da turma na primeira e na segunda avalia��o */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");
	
	int nmAluno, i = 0;
	float nota1, nota2, media1, media2;
	
	printf("\nInforme o n�mero de alunos: ");
	scanf("%d", &nmAluno);
	while(nmAluno > i)
	{
		do
	{
		printf("\nDigite a primeira nota do aluno %d: ", i + 1);
		scanf("%f", &nota1);
		
		if (nota1 < 0 || nota1 > 10)
		{
			printf("Nota inv�lida, insira um valor entre '0 e 10'.");
		}
		media1 += (nota1) / (nmAluno);
			
	}while(nota1 < 0 || nota1 > 10);
	do
	{
		printf("\nDigite a segunda nota do aluno %d: ", i + 1);
		scanf("%f", &nota2);
		
		if (nota2 < 0 || nota2 > 10)
		{
			printf("Nota inv�lida, insira um valor entre '0 e 10'.");
		}
		media2 += (nota2) / (nmAluno);
	}while(nota2 < 0 || nota2 > 10);
	i++;
	}
	
	printf("\nM�dia dos alunos na primeira prova: %.2f", media1);
	printf("\nM�dia dos alunos na segunda prova: %.2f", media2);
	
	return 0;
}
