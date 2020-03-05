/*Las funciones no las he colocado en una carpeta porque replit me dice que no existen a la hora de declararlas, aunque yo incluya la carpeta en donde se localizan, a demas, hay un warning con la funcion de ValoresMaximosYminimos que no supe resolver*/
#include <stdio.h>
#include "principal.h"
#include "ValoresMaximosYminimos.h"
int main()
{
  char b,a;
  printf("Bienvenido, selecciona una opcion del menu:\n");
  printf("1 -> Semana 1\n");
  printf("2 -> Semana 2\n");
  printf("s -> salir\n");
  printf("-> ");
  scanf("%c",&b);
  switch(b)
  {
    case '1':{
      scanf("%c",&a);
      principal();
    }
    break;
    case '2':
    {
      valoresMaximos();
      valoresMinimos();
    }
    break;
    case 's':
      printf("Hasta luego\n");
    break;
    default:
      printf("No digitaste nada del menu, adios");
  }
  return 0;
}