#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*O hotel Xulambs� cobra R$ 95,00 a di�ria e mais uma taxa de servi�os. 
A taxa de servi�os � de: 2,50 por dia, se n�mero de di�rias < 15; 1,50 por 
dia, se n�mero de di�rias = 15; e 0,50 por dia, se n�mero de di�rias > 15. 
Fa�a um algoritmo que l� o n�mero de di�rias e calcula o total a ser pago 
pelo cliente*/


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
setlocale(LC_ALL, "portuguese");
int dias, valor, diaria, serv;

printf ("Quantos dias deseja ficar hospedado: ");
scanf ("%d", &dias);


diaria = (95 * dias);



 if (dias < 15){
	serv = dias * 2.50
;}
 else if (dias = 15){
 serv =	dias * 1.50
;}
 else if (dias > 15){
 serv =	dias * 0.50
;}	
	
valor = (serv + diaria);

printf ("Custo total: %d\n", valor);


	return 0;
}
