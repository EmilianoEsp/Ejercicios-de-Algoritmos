#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
int temp1, temp2, temp3;
main (){
	printf ("Ingrese la primera temperatura temperaturas."); 	scanf ("%d", &temp1); 
	printf ("Ingrese la segunda temperatura temperaturas.");    scanf ("%d", &temp2); 
	printf ("Ingrese la tercera temperatura temperaturas.");    scanf ("%d", &temp3);
    if (temp1 == temp2){
    	if (temp2 == temp3){
    		printf ("las 3 valen lo mismo.");
		}
	}
	if (temp1 == temp2){
		if (temp1 > temp3){
			printf ("temp1 y temp2 son iguales y son mas grandes.");
		}
	}else if (temp1 == temp3){
		if (temp1 > temp2){
			printf ("temp1 y temp3 son iguales y son mas grandes.");
		}
	}else if(temp2 == temp3){
		if (temp2 > temp1){
			printf ("temp2 y temp3 son iguales y son mas grandes.");
		}
	}
	if (temp1 >  temp2){
    	if (temp1 > temp3){
    		printf ("temp1 es la mas grande ");
    		if (temp3 == temp2){
    			printf ("y temp3 es igual a temp2.");
			}else if (temp3 > temp2){
		    	printf ("y temp2 la mas chica.");
			}else{
				printf ("y temp3 la mas chica.");
			}
		}
	}
    if (temp3 >  temp1){
    	if (temp3 > temp2){
		    printf ("temp3 es la mas grande ");
		    if (temp1 == temp2){
    			printf ("y temp1 es igual a temp2.");
			}else if (temp1 > temp2){
		    	printf ("y temp2 la mas chica.");
			}else{
				printf ("y temp1 la mas chica.");
			}
	    }
	}
	if (temp2 >  temp1){
    	if (temp2 > temp3){
		    printf ("temp2 es la mas grande ");
	        if (temp3 == temp1){
    			printf ("y temp1 es igual a temp3.");
			}else if (temp1 > temp3){
		    	printf ("y temp3 la mas chica.");
			}else{
				printf ("y temp1 la mas chica.");
			}
		}
	}
getch ();
}
