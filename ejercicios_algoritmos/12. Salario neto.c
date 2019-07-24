#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int salario, hora, tasa, extra, impuesto;

main (){
	printf ("Ingrese el total de sus horas semanales trabajadas.");
	scanf ("%d", &hora);
	printf ("Ahora ingrese el pago por hora.");
	scanf ("%d", &tasa);
	if (hora > 37){
		salario = hora * tasa;
		extra = (tasa * 0.5) * (hora - 37);
		salario = salario + extra;
		printf ("Se le aniadiran a su salario $ %d por horas extra.", extra);
	}
	if (salario > 15000){
		printf ("Su salario es %d pero se le descontara el diez porciento por impuestos,", salario);
		impuesto = salario * 0.1;
		salario = salario - impuesto;
		getch();
	}
	printf ("Su salario es de $ %d", salario);
	getch();
} 
