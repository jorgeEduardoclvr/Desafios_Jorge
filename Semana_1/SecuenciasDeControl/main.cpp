#include<stdio.h>
#include "funciones\func1.h"
#include "funciones\secuencia1.h"
//Secuencias de control Jorge Eduardo Contreras Muñiz
#include "funciones\secuencia2.h"
#include "funciones\secuencia3.h"
#include "funciones\yeyecoa.h"
int main(void)
{
	char a;
	printf("Selecciona una opcion del menu:\n");
	printf("1: Secuencia de control 1\n");
	printf("2: Secuencia de control 2\n");
	printf("3: Secuencia de control 3\n");
	printf("4: Yeyecoa\n");
	printf("s: Salir\n");
	printf("->");
	scanf("%c",&a);
	switch(a)
	{
		case '1':
			secuencia1();
		break;
		case '2':
			secuencia2();
		break;
		case '3':
			secuencia3();
		break;
		case '4':
			yeyecoa();
		break;
		case 's':
			printf("Nos vemos");
		break;
		default:
			opcion1();
		break;		
	}
	return 0;
}
