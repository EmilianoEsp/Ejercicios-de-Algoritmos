#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int resto, num;

main (){
	printf ("Ingrese un numero. ");
	scanf ("%d", &num);
	resto = num % 2;
	if (resto == 0){
		printf ("Su numero es par");
	}else{
		printf ("Su numero es impar");
	}
	getch();
}
