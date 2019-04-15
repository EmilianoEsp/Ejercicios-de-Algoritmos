#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int compra, descuento;

main (){
	printf ("Ingrese el costo de su compra.");
	scanf ("%d", &compra);
	if (compra > 1000){
		printf ("Al gastar mas de $1000 en esta compra recibe un 30 porciento de descuento.");
		descuento = compra * 0.30;
		compra = compra - descuento;
		getch();
		printf ("Se le descontaran $ %d y tendra que pagar: %d", descuento, compra);
	}else if (compra > 500){
		printf ("Al gastar mas de $500 en esta compra recibe un 20 porciento de descuento.");
		descuento = compra / 5;
		compra = compra - descuento;
		getch();
		printf ("Se le descontaran $ %d y tendra que pagar: %d", descuento, compra);
	}else{
		printf ("Costo final: %d", compra);
	}
	getch();
}
