#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Entre com a base e a altura de um ret�ngulo e mostre os resultados:
a. Per�metro (Per�metro � igual � soma dos 4 lados)
b. �rea (�rea � igual � lado vezes lado*/


int main(int argc, char *argv[]) {
	
int n1, n2, perimetro, area;

printf ("Digite as medidas da Base e Altura: ");
scanf ("%d %d", &n1, &n2);

area = (n1 * n2);

perimetro = (2*n1 + 2*n2);

printf ("Perimetro: %d\n", perimetro);
printf ("Area: %d\n", area);
	

	
	return 0;
}
