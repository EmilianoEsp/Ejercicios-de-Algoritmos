#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int nacimiento, mes, dia, edad;

main(){
	printf ("Ecriba el año de su nacimiento.");
	scanf("%d", &nacimiento);
	printf("Ahora escriba el mes de su nacimiento.");
	scanf ("%d", &mes);
	printf ("Por ultimo escriba el dia.");
	scanf ("%d", &dia);
	if (mes > 4){
		edad = 2018 - nacimiento;
	}else if(mes < 4){
		edad = 2019 - nacimiento;
	}else if (dia <= 5){
		edad = 2019 - nacimiento;
	}else {
		edad = 2018 - nacimiento;
	}
	 if (edad<18){
    	printf ("Usted tiene %d. Es menor de edad.", edad);
    	getch();
	}else{
		printf ("Usted tiene %d. Es mayor de edad.", edad);
	    getch();
}
}

