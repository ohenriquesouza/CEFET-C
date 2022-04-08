#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*  Uma empresa deseja presentear seus funcion�rios com um b�nus de Natal, cujo valor � definido do seguinte modo: 
a. Funcion�rios do sexo masculino com tempo de casa superior a 15 anos ter�o direito a um b�nus de 20% do seu sal�rio; 
b. As funcion�rias com tempo de casa superior a 10 anos ter�o direito a um b�nus de 25% do seu sal�rio; e 
c. os demais funcion�rios ter�o direito a um b�nus de R$ 100,00. 
Fa�a um algoritmo que leia o c�digo do funcion�rio, o sexo, o tempo de trabalho (em anos) e o sal�rio. O algoritmo deve calcular 
o valor do b�nus */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");	

float tempo, bonus, salario;
char sexo;

printf("Digite, por favor seu tempo de servi�o: ");
scanf("%f", &tempo);

printf("Agora, indique seu sexo: ");
scanf(" %c", &sexo);
sexo = toupper (sexo);

printf("Insira seu sal�rio: ");
scanf("%f", &salario);



if (sexo == 'M' && tempo  >15){
	bonus = (salario * 0.20 );
}


else if (sexo == 'F' && tempo > 10){
	bonus = (salario * 0.25);
}

	else 
	bonus = 100;

printf("Seu b�nus ser�: %.0f\n", bonus);


	return 0;
}
