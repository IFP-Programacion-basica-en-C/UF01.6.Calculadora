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
void pideOperadores(int *, int *);
// int suma(int, int);
// int resta(int, int);
// int multiplicacion(int, int);
// int division(int, int);

int main()
{
	int num = 1;
	int operador1, operador2;

	printf("BIENVENIDOS AL PROGRAMA CALCULADORA:\n\n");

	do
	{
		pintaMenu();
		pideNumEntreRango(0, 4, &num);

		switch (num)
		{
		case 0:
			printf("Has salido de la calculadora.");
			break;

		case 1:
			pideOperadores(&operador1, &operador2);
			int resultado = operador1 + operador2;
			printf("\n%d + %d = %d\n", operador1, operador2, resultado);
			break;
		case 2:
		}
	} while (num != 0);

	getch();

	return 0;
}
void pintaMenu()
{
	printf("\n\nSeleccione la operacion que desea realizar:\n0.Salir\n1.Sumar\n2.Restar\n3.Multiplicar\n4.Dividir\n");
}
pideNumEntreRango(int min, int max, int *num)
{

	do
	{
		scanf("%d", &*num);
		// printf("\nHas seleccionado la opcion %d", *num);
	} while (*num <= min || *num > max);

	return num;
}
void pideOperadores(int *operador1, int *operador2)
{

	printf("\nIntroduce el operador 1: ");
	scanf("%d", &*operador1);
	printf("\nIntroduce el operador 2: ");
	scanf("%d", &*operador2);
}
