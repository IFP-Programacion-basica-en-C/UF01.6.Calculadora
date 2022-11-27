/*	Autor: Paula martins de Sousa		Fecha de creación: 27/11/2022  */

/*
**	ENUNCIADO DEL PROGRAMA
**	Se desea  crear una calculadora con las opciones: sumar, restar, multiplicar y 
dividir, utilizando procedimientos y funciones.
Mediante un menú (“pintaMenu”), debes preguntar al usuario que operación deseas 
realizar. El valor que escoja el usuario en el menú, debe estar controlado entre 0 y 3 
con la función: (“pideNumEntreRango”)
Posteriormente hay que solicitar los dos operandos para realizar el cálculo mediante 
un procedimiento llamado (“pideOperadores”). Hay que verificar que el programa 
no divida por 0, en este caso, debe mostrar un mensaje de error. 
Para salir del programa hay que poner un 0.
El main debe mostrar el resultado cada vez que se hace una operación.
En cada opción (usando un switch) se hará una llamada a las funciones suma, resta, 
multiplicación o división según la opción escogida.
El programa finaliza cuando se introduce un 0.

**
*/

#include <stdio.h>
void pintaMenu();
int pideNumEntreRango(int, int, int *);
void pideOperadores(int, int);
int suma(int, int);
int resta(int, int);
int multiplicacion(int, int);
int division(int, int);

int main(){
	int num=1;

	printf("BIENVENIDOS AL PROGRAMA CALCULADORA:\n");
	pintaMenu();
	pideNumEntreRango(0,4, &num);
	if(num=0)
	{
		printf("Has salido de la calculadora.");
	}
	else{

	}

	
	getch();
	
	return 0;
}
void pintaMenu()
{
printf("Seleccione la operacion que desea realizar:\n0.Salir\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n");
}
pideNumEntreRango(int min, int max, int *num)
{

	do
	{
		scanf("%d", &*num);
		printf("Has seleccionado la opcion %d", *num);
	} while (*num <= min || *num > max);
	

	

	return num;
}
