#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "portuguese");


	int i;
	float populacaoMilanos, populacaoBruzun;	
	
	printf("Sabe-se, que a popula��o da Rep�blica Democr�tica dos Bruzundangas � de 90 milh�es. \n");
	prtinf("J� na Uni�o Federalista Do Milanos, a popula��o � de 200 milh�es. \n");
	
	populacaoBruzun = 90000000;
	populacaoMilanos = 200000000;
	
	for(i = 0; populacaoBruzun < populacaoMilanos; i++){
		if (populacaoBruzun < populacaoMilanos){
			populacaoBruzun = populacaoBruzun + (populacaoBruzun * 0.03);
			printf("Popula��o: %.2f\n", populacaoBruzun);
			
			populacaoMilanos = populacaoMilanos + (populacaoMilanos * 0.015);
			printf("Populacao M: %.2f\n", populacaoMilanos);			
		}	
	}
	
	printf("\nS�o necess�rios %d anos. \n", i);	

	return 0;
}
