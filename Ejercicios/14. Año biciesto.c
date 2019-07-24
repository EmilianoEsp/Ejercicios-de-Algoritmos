#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int resto4, resto100, resto400, anio;

main (){
	printf ("Ingrese un anio.");
	scanf ("%d", &anio);
	resto4 = anio % 4;
	resto100 = anio % 100;
	resto400 = anio % 400;
    if (resto4 == 0 && resto100 == resto400){	
		 printf ("Es bisiesto.");
	}else if (resto4 != resto400 && resto4 != resto100){
	    	printf ("Es bisiesto");
		}else{
			printf("No es bisiesto");
		}
}
