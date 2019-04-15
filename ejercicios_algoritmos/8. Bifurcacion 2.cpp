#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int num;
main (){
	printf ("Ingrese un numero. ");
	scanf ("%d", &num);
	if (num>=1){
		printf ("El numero es positivo.");
	}else if (num<=-1){
		printf ("El numero es negativo.");
	}else{
		printf("El numero es 0");
	}
	getch();
}
