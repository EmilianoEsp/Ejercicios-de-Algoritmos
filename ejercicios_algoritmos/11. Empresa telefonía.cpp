#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int tiempo, descuento, plan;
main (){
	printf ("Ingrese el precio del plan que esta pagando.");
	scanf ("%d", &plan);
	printf ("Ingrese hace cuantos años se asocio.");
	scanf ("%d", &tiempo);
	if (tiempo >= 10){
		descuento = plan / 5;
		plan = plan - descuento;
	}else if (tiempo < 5){
		descuento = plan / 20;
		plan = plan - descuento;
	}else {
		descuento = plan / 10;
		plan = plan - descuento;
	}
	printf ("El total descontado es %d y el precio final del plan es de %d", descuento, plan);
	getch ();
}
