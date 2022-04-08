#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 
Um pal�ndromo � uma palavra ou frase que tenha a propriedade de ser a mesma palavra ou 
frase tanto quando ela � lida da direita para a esquerda quanto quando ela � lida da esquerda 
para a direita. Fa�a um programa que, dada uma string, diga se ela e um pal�ndromo ou n�o. 
O programa deve imprimir �� Pal�ndromo� caso a string seja um pal�ndromo e �N�o � 
pal�ndromo�, caso n�o seja. Lembre de tratar a pontua��o e acentua��o na resolu��o do 
exerc�cio.
Nos exemplos abaixo, por exemplo, o programa deve retornar que as palavras/frases abaixo 
s�o pal�ndromos: 
a. ovo 
b. arara 
c. Socorram-me, subi no �nibus em Marrocos. 
d. Anotaram a data da maratona. 
e. mega bobagem 
*/

int main() 
{
    setlocale(LC_ALL,"portuguese");
    int i = 0,j = 0, cont=0;
    char frase[80], frase2[80];
    
    fflush(stdin);
    printf("Informe a frase a ser testada: ");
    fgets(frase,80,stdin);
    frase[strlen(frase)-1] = '\0';
    
    for(i=0; i < strlen(frase); i++)
	{
    	if(frase[i] != '!' && frase[i] != '?' && frase[i] != ' ' && frase[i] != '.')
        frase2[j++] = frase[i];
    }

    
    for(i = 0; i < ((strlen(frase))/2); i++)
    {
        if(frase[i] != frase[strlen(frase)-1-i])
        {
            cont++;
        }   
    } 
    
    if(cont == (strlen(frase)/2))
    {
        printf("\nA frase inserida n�o � um pal�ndromo.");
    } else
    {
        printf("\nA frase inserida � um pal�dromo.");
    }
             
    return 0;
}
