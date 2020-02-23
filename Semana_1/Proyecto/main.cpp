//Proyecto Jorge Eduardo Contreras Muñiz
#include <stdio.h>
#include "funciones\func1.h"
int main(void)
{
	printf("Selecciona una opcion del menu:\n");
	char a;
	printf("1: Saludo\n");
	printf("2: WIP\n");
	printf("s: Salir\n");
	printf("->");
	scanf("%c",&a);
	switch(a)
	{
		case '1':
			opcion1();
		break;
		case '2':
			printf("Trabajo en progreso");
		break;
		case 's':
			printf("Bye bye");
		break;
		default:
			printf("Selecciona algo del menu");
	}
	putchar('\n');
	return 0;
}
