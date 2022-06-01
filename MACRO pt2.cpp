#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define MOSTRAR(p1) printf(%f\n, p1);

	int main (void){
		float valor;
		
		printf("Informe um valor desajado: ");
		scanf("%f", &valor);
	
		MOSTRAR(valor);
		valor=valor*3;
		MOSTRAR(valor);
			
		getch();
	
	}

