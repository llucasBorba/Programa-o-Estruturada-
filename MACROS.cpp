#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ERRO printf ("Valor Invalido. \n")

	int main (void){
		int nmr;
		
		printf("Informe um numero de 1 a 10: ");
		scanf("%d", &nmr);
		
		if ((nmr<1) || (nmr>10))
		ERRO;
		
		else
		printf ("Valor pertence ao intervalo");		
		
		getch();
		return 0;
	}

